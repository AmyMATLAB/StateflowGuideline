%% Stateflow 建模参考
%
% 微信公众号：simscpae
%
%
% 根据 JMAABV4.01(201503)  整理
%
% * <https://www.mathworks.com/solutions/automotive/standards/maab.html>
%
% * Priority: Mandatory必须 / Strongly Recommended强烈建议 / recommended建议
% 
%% 5.1.变量设定
%
% *1.1 强烈建议*所有的 Stateflow 模块的输入输出端口名与对应的信号名相同，除非是重用的 Chart 。
%
% * 这只是为了提高模型的可读性，不影响代码生成，生成的代码的输入使用的是信号线上的数据对象。
% * 打开模型 <matlab:SF5_1_2_jc0700_2 SF5_1_2_jc0700_2>，生成代码，查看两个 chart 代码的变量名字。
%
% *1.2 强烈建议*未使用的数据不应该留在 Stateflow 模块里。
%
% * 打开模型： <matlab:SF5_1_2_jc0700_2 SF5_1_2_jc0700_2>，
% * 这里设置了两个没用到的变量：模型级别的 local，Chart级别的 data；
% <matlab:winopen('sfwl_sd23.png') 点我>。
% * 生成代码，可以看到 local 生成了冗余代码，而 data 变量并没有。
% * 另外诊断工具(2010b以后)： <matlab:winopen('stateflow_unusedData.jpg') 点我>，
% 可以诊断在 Stateflow 内的冗余变量 data，但是不包括 Stateflow 之外定义的 local。（测2016b不能判断出 data和local)
%
% 1.3 与 Simulink 的接口信号以及参数勾选强数据类型选项(09a之前) 
%
% * 打开模型： <matlab:SF5_1_3_db0122_3 SF5_1_3_db0122_3>，
% * 将 Chart 输入输出已指定的数据类型设置为继承，仿真会出错。
%
% *1.4 强烈建议*定义Stateflow 变量必须符合以下规范：
%
% * 所有的局部变量都必须定义在 Chart level及以下，
% 不要定义在模型级别 <matlab:winopen('stateflow_datadefine.jpg') 点我>
% * 不同的 chart 之间不要设置公共变量，除非常数和参数；
% * 嵌套层之间的变量定义不要使用相同名字。
%
% *1.5 Chart设置为C语法的时候，向量的默认从 0 开始，也可以设置为从 1 开始，*
% <matlab:winopen('stateflow_dataindex.jpg') 点我>。
% 默认从0开始。
%
% * 打开模型： <matlab:SF5_1_5_jc0701_1 SF5_1_5_jc0701_1>，
% * 上下两个 Chart 的代码完全一样，不同在于上面是 C 代码，下面是 M 代码，仿真查看结果；
% * 设置 C chart 的 param 变量的 First Index 属性为 1，再次查看结果。
%
% 1.6 建议参数以及常数不要在模型里直接使用数字。 
% 使用 '0'给变量赋初值，或者使用 '1' 作为自增或自减运算除外。
% <matlab:winopen('stateflow_param.jpg') 点我>
%
% *1.7 强烈建议* 在 Stateflow 里不应该使用指针来引用用户自定义代码里的变量。
% 尽量不要使用指引引用的方式来访问底层硬件，而是以信号的方式。
%
% * 打开源文件定义的变量和指针变量： <matlab:winopen('SF5_1_7_jm0011_NotUsePoint.h') SF5_1_7_jm0011_NotUsePoint.h>；
% <matlab:winopen('SF5_1_7_jm0011_NotUsePoint.c') SF5_1_7_jm0011_NotUsePoint.c>；
% * 打开模型： <matlab:SF5_1_7_jm0011_NotUsePoint SF5_1_7_jm0011_NotUsePoint>；
% 
% 这并不是说禁止在用户自定义代码里使用指针。
% Stateflow 里可以以引用的方式访问 C 代码里定义的变量。
% 但是使用模型内没有定义的信号，会影响模型的可读性。
% 所以虽然没有严格禁止使用指针，最好还是不要用。
%
%% 2.状态模型基本外观
%
% *2.1 强烈建议* 跳转箭头不要与其他模型元素交叉、重叠。
%
% 2.2 在任何一层，如果是互斥关系 *必须* 至少有两个互斥状态以上。
%
% 2.3 如果使用除法， *建议* 要有一定的流程避免除零的情况发生。
%
% *2.4 强烈建议* 默认跳转箭头符合以下规范
%
% * 位置放在最左上角的明显位置，
% <matlab:SF5_2_4_jc0531_2_A SF5_2_4_jc0531_2_A>；
% * 同一层禁止出现多个默认跳转箭头，
% <matlab:SF5_2_4_jc0531_2_B SF5_2_4_jc0531_2_B>；
% * 处于状态内部的默认箭头如果连在 Junction 上的话必须要有一个无条件路径到达某一个状态；
% 否则会出错：
% <matlab:SF5_2_4_jc0531_2_C SF5_2_4_jc0531_2_C>,
% 另外，可以通过设置诊断菜单来检查这个配置,
% <matlab:winopen('stateflow_diagnostic.jpg') 点我>。
%
% 2.5 *必须* 取消勾选 'Execute(enter) Chart At Initialization'。
%
% 2.6 建议限制单个视图里的状态层数。比如，限制在 3 层以内。
% 如果超出这个范围，就把内层做成 Subchart ，比如：
% <matlab:winopen('stateflow_layerNum.jpg') 点我>
%
% 2.7 建议限制单个视图内可见的状态个数，一般 6 到 9 个。
% <matlab:winopen('stateflow_stateNum.jpg') 点我>
%
% 2.8 当状态机难以在一个视图上表达清楚时，使用 Subshart 。
%
% *2.9 强烈建议* 不要为了进行状态分组而滥用并行状态。
% 比如这四个并行状态
% <matlab:winopen('stateflow_parastate.jpg') 点我>，
% 不要为了分组而增加多余的父状态：
% <matlab:winopen('stateflow_paramState2.jpg') 点我>
%
% 2.10 数据要定义在所使用的状态范围内，除非两个或多个并行状态需要用到同一个数据。
%
% *2.11 强烈建议* 禁止从外部状态直接跳转到子状态。
% 但是从子状态直接跳到外部父状态是可能的，
% <matlab:winopen('stateflow_transiton.jpg') 点我>。
% 这样考虑是因为容易割裂状态封装的概念，引起不必要的错误。
% 
%% 3.状态名
%
% 3.1 Chart 内的状态不能重名，但是 Atomic sub-chart可以视为单独的 chart。
% 也就是说同一个元胞子状态内部状态不能重名，不同的元胞子状态内部可以有相同的名字。
% <matlab:stateflow_uniqueStatename stateflow_uniqueStatename>。
%
% 3.2 状态名字不能包含/号。
%
% *3.3 强烈建议* 状态名与变量名不得相同。
% <matlab:winopen('stateflow_statename.jpg') 点我>
%
% 3.4 状态内en、du以及ex必须按照这个顺序来写。如果有组合的比如en,du，则写在最上面或者最下面。
% <matlab:winopen('stateflow_actionorder.jpg') 点我>
%
% 3.5 建议同种类型的命令语句只写一遍。
% <matlab:winopen('stateflow_action.jpg') 点我>
%
% 3.6 建议不要使用exit，如果可以替换成对应的entry。
% 明确显示出将会在什么状态下执行该语句。
%
% 3.7~12 一些状态语句的书写规范：
% <matlab:stateflow_stateLanguage stateflow_stateLanguage>。
%
% 3.13 用于状态跳转判断的变量，建议不要使用 du 来更新。
% 因为 du 语句是在当前跳转判断失败，返回状态后才会执行。
% 所以会造成，跳转条件满足后延迟一个采样时间步才跳转。
% <matlab:stateflow_transitionUpdate stateflow_transitionUpdate>。
%% 4.条件以及条件语句
%
% 4.1 *强烈建议*写Action语句时，三个以内的运算符可以写在一行，超出三个则分行写，并注意运算符对齐。
% 如果涉及到不同运算符，则需要用括号显式注明优先级。
% <matlab:Stateflow_action Stateflow_action>
% 如果相同的复杂条件被多次调用，可以考虑做成一个 flow graph function。
%
% 4.2 *建议*条件与执行语句的放置位置需要模型内统一，推荐写在跳转箭头的靠近起点端，也可以写在跳转箭头中间。
% 目的就是明确显示出条件/执行语句的归属，并且风格统一。
%
% 4.3 *建议*跳转箭头的注释语句可以放在条件/执行语句的上部。
%
% 4.4 *严格保证*除了最后一个箭头，需要注意迁移条件的设置。
% <matlab:Stateflow_actioncondition Stateflow_actioncondition>
%
% 4.5 *推荐*写执行语句的时候，前后括号单独在一行，每一句执行语句各占一行并后加;号。
% <matlab:Stateflow_actioncondition Stateflow_actioncondition>
%
%% 5 状态迁移
%
% 5.1 *建议*状态之间的跳转箭头要么垂直要么水平：
% <matlab:Stateflow_statetransition Stateflow_statetransition>
% 为了更明显表示逻辑关系，可以用 Junction 将箭头分段，水平箭头一般写条件，垂直一般写 Action。
% 跳转箭头 *千万不要*超出 parent state 的边界,会导致 parent state 意外的重启。
%  <matlab:Stateflow_actionlineerror Stateflow_actionlineerror>
%
% 5.2 *必须保证*没有跳转回流(Backtracking)：
% <matlab:Stateflow_statebacktracking Stateflow_statebacktracking>
%
% 5.3~5 *建议*不要用 transition Action， *强烈建议*不要混用 conditon action与transition
% action。
% <matlab:Stateflow_action2 Stateflow_action2>
%
% 5.6 *强烈建议*数据比较只在相同数据类型之间进行。需要对比不同数据类型是，使用显示的数据转换 int16(i)。
% 注意无符号整形不要和负数比较。
%
% 5.7 *强烈建议不要直接对比两个浮点数相等。*
%
% * 不要直接对比两个浮点数相等，比如 var1 == var2,var1 ~=var2,var1 ~=var2, 
% 而是使用差值小于某一个极小值的方式。直接比较只可用于整形之间。
%
% 5.8 *强烈建议位运算符&，|，^，~只能用于位运算。避免对有符号整形使用位运算。*
%
% * 使用之前，在chart属性里勾选 *Enable C-bit operations*
% * 布尔操作使用 &&，||
% *  如图： <matlab:winopen('stateflow_bitopp.jpg') 点我>
%
% 5.9 *强烈建议禁止对逻辑量进行比较运算*
%
% * 禁止对布尔量进行逻辑操作。布尔类型的数据禁止与数字(0,1)或者逻辑值(true, false)比较运算。
% 而是使用 NOT之类的布尔运算符，~ 或者 ！。
% *  如图： <matlab:winopen('stateflow_bitoppBoolean.jpg') 点我>
%
% 5.10 *强烈建议注意不要对无符号整形取负号*
%
% 5.11~13 a++，自加或者自减 *必须要单独写为一个 action*
%
% 而且条件里必须是布尔量。
% <matlab:stateflow_incrementsaction stateflow_incrementsaction>
%
% 5.14 建议在同一个State内不要重用变量
% <matlab:stateflow_reuseVariable stateflow_reuseVariable>
%
% 5.15 建议不要直接使用函数表达式作为比较值
% <matlab:stateflow_function stateflow_function>
%
% *使用事件逻辑与计数器*
% <matlat:winopen('Stateflow_time.jpg') 看图>。
%
% *有多个跳转时，根据跳转的可能性大小进行执行顺序排序，具有高安全优先级检查项排在前面*
% <matlat:winopen('Stateflow_transitionpriority.jpg') 看图>。
%
% 比如图中的 SteadyCruise 是最可能的情况，但是因为 PlanelsCrashing 具有高优先级，所以排在前面。
% 另外，这种情况，把 PlanelsCrashing当做事件更合适。
%
%% 6 状态内部跳转
%
% <matlab:stateflow_internaltransition stateflow_internaltransition>
%
% 6.1 *强烈建议*所有的状态的内部跳转连线必须在 State 框线的左侧面。
%
% 6.2 *强烈建立*在 State 内部不要混用 en、du,ex等语句和流程图。
% 因为这样执行顺序不直观。
%
% 6.3~4 建议同一个 state 最好不要有多个内部跳转。
% 如果有多个内部跳转， *强烈建议* 跳转线按照从上到下的优先级设置。
% 
%
%% 7 流程图基本规则
%
% 7.1 *强烈建议*遵守基本规则：流程图的条件箭头都水平，动作箭头都竖直，除了循环结构。
% 箭头语句可以是条件、condition action，不要在流程图里使用 transition action。
%
% 7.2~4 *强烈建议*常见的流程图使用内置的基本模式。
% 不要使用循环来进行矩阵运算。
%
% 7.5 *强烈建议*有一条不需要条件的分支路，防止 backtracking。
% 无条件支路优先级必须设置为最低。
% <matlab:stateflow_unconditionflow stateflow_unconditionflow>
%
%% 8 流程图细节规则
%
% 8.1 *建议*在流程图函数中，给无条件分支路线增加注释，显式说明不需要任何动作而不是忘了添加。
%
% 8.2~4 *建议*只在一个地方给返回值赋值。 
% 另外，流程图里最好只有一个终点Juntion，而且终点 Junction 上只有一条跳转线。
% 这样就比较清楚的表示出流程图的终点在哪里。
% <matlab:stateflow_flowfcn stateflow_flowfcn>
%% 9 事件
%
% 9.1  *注意*所有的 Event 都必须定义在 chart 层级以及以下，禁止定义在模型层。
% 不同的chart之间没有local事件的交互。09b以后作为编译错误出现。
%
% 9.2  *建议* Event 仅仅为 Function call子系统来使用。状态转移条件不建议使用 Event。
% 如果没有完全理解 Event 原理而将它作为状态转移条件的话，无意中会造成递归而在一个周期内处理两次。
%
% 9.3  *建议*如果触发 Event 的 State 退出时，需要将事件调用的子系统重置，
% 则建议使用 bind。
% <matlab:ex_bind_fcn_call_subsys_to_state ex_bind_fcn_call_subsys_to_state>
%
% 9.4 *强烈建议*所有时间的广播遵守以下基本原则：
%
% * 只允许进行方向性的广播事件，使用 send 或者 state.eventname。
% * 如果要广播到多个状态，使用多个 send 语句。
%
%% 10.Stateflow 内的函数
%
% 10.1  *建议*函数函数类型的选用基于以下基本原则：
%
% * 如果是 if/then/else 的逻辑，使用 Graphical 函数；
% * 如果是传递函数，积分以及查表，使用 Simulink 函数；
% * 如果是复杂的方程或者 if/then/else ，可以使用 MATLAB 函数；
%
% 10.2  *建议*是否在 Stateflow 里使用 Simulink 函数时
% 需要考虑满足这些条件：
%
% * 只使用到本地的 chart 数据 或者还使用从 simulink 来的输入信号；
% * 被 chart 内的多个地方调用到；
% * 不会每个时间步都调用，
% <matlab:stateflow_internalfunction stateflow_internalfunction>
%
% 10.3  *建议*不要在内嵌的Simulink里再嵌Stateflow
%
% 10.3  *一定不要*在 chart 里使用ml.cos(wheelAng)这样语法来调用MATLAB函数
%
% *注意Function放置的位置，表示它是全局函数还是内嵌函数*
%  <matlab:winopen('Stateflow_functioncallplace.jpg') 看图>
% <matlab:Stateflow_SD104 Stateflow_SD104>
%% 定点数
%
% * 定点数计算时，使用 := 符号（C环境）：
% <matlab:Stateflow_SDfixpoint Stateflow_SDfixpoint>
% * 每一次只能有一个操作符，
% <matlab:Stateflow_SDfixpoint2 Stateflow_SDfixpoint2>