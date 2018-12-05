%% Stateflow ��ģ�ο�
%
% ΢�Ź��ںţ�simscpae
%
%
% ���� JMAABV4.01(201503)  ����
%
% * <https://www.mathworks.com/solutions/automotive/standards/maab.html>
%
% * Priority: Mandatory���� / Strongly Recommendedǿ�ҽ��� / recommended����
% 
%% 5.1.�����趨
%
% *1.1 ǿ�ҽ���*���е� Stateflow ģ�����������˿������Ӧ���ź�����ͬ�����������õ� Chart ��
%
% * ��ֻ��Ϊ�����ģ�͵Ŀɶ��ԣ���Ӱ��������ɣ����ɵĴ��������ʹ�õ����ź����ϵ����ݶ���
% * ��ģ�� <matlab:SF5_1_2_jc0700_2 SF5_1_2_jc0700_2>�����ɴ��룬�鿴���� chart ����ı������֡�
%
% *1.2 ǿ�ҽ���*δʹ�õ����ݲ�Ӧ������ Stateflow ģ���
%
% * ��ģ�ͣ� <matlab:SF5_1_2_jc0700_2 SF5_1_2_jc0700_2>��
% * ��������������û�õ��ı�����ģ�ͼ���� local��Chart����� data��
% <matlab:winopen('sfwl_sd23.png') ����>��
% * ���ɴ��룬���Կ��� local ������������룬�� data ������û�С�
% * ������Ϲ���(2010b�Ժ�)�� <matlab:winopen('stateflow_unusedData.jpg') ����>��
% ��������� Stateflow �ڵ�������� data�����ǲ����� Stateflow ֮�ⶨ��� local������2016b�����жϳ� data��local)
%
% 1.3 �� Simulink �Ľӿ��ź��Լ�������ѡǿ��������ѡ��(09a֮ǰ) 
%
% * ��ģ�ͣ� <matlab:SF5_1_3_db0122_3 SF5_1_3_db0122_3>��
% * �� Chart ���������ָ����������������Ϊ�̳У���������
%
% *1.4 ǿ�ҽ���*����Stateflow ��������������¹淶��
%
% * ���еľֲ����������붨���� Chart level�����£�
% ��Ҫ������ģ�ͼ��� <matlab:winopen('stateflow_datadefine.jpg') ����>
% * ��ͬ�� chart ֮�䲻Ҫ���ù������������ǳ����Ͳ�����
% * Ƕ�ײ�֮��ı������岻Ҫʹ����ͬ���֡�
%
% *1.5 Chart����ΪC�﷨��ʱ��������Ĭ�ϴ� 0 ��ʼ��Ҳ��������Ϊ�� 1 ��ʼ��*
% <matlab:winopen('stateflow_dataindex.jpg') ����>��
% Ĭ�ϴ�0��ʼ��
%
% * ��ģ�ͣ� <matlab:SF5_1_5_jc0701_1 SF5_1_5_jc0701_1>��
% * �������� Chart �Ĵ�����ȫһ������ͬ���������� C ���룬������ M ���룬����鿴�����
% * ���� C chart �� param ������ First Index ����Ϊ 1���ٴβ鿴�����
%
% 1.6 ��������Լ�������Ҫ��ģ����ֱ��ʹ�����֡� 
% ʹ�� '0'����������ֵ������ʹ�� '1' ��Ϊ�������Լ�������⡣
% <matlab:winopen('stateflow_param.jpg') ����>
%
% *1.7 ǿ�ҽ���* �� Stateflow �ﲻӦ��ʹ��ָ���������û��Զ��������ı�����
% ������Ҫʹ��ָ�����õķ�ʽ�����ʵײ�Ӳ�����������źŵķ�ʽ��
%
% * ��Դ�ļ�����ı�����ָ������� <matlab:winopen('SF5_1_7_jm0011_NotUsePoint.h') SF5_1_7_jm0011_NotUsePoint.h>��
% <matlab:winopen('SF5_1_7_jm0011_NotUsePoint.c') SF5_1_7_jm0011_NotUsePoint.c>��
% * ��ģ�ͣ� <matlab:SF5_1_7_jm0011_NotUsePoint SF5_1_7_jm0011_NotUsePoint>��
% 
% �Ⲣ����˵��ֹ���û��Զ��������ʹ��ָ�롣
% Stateflow ����������õķ�ʽ���� C �����ﶨ��ı�����
% ����ʹ��ģ����û�ж�����źţ���Ӱ��ģ�͵Ŀɶ��ԡ�
% ������Ȼû���ϸ��ֹʹ��ָ�룬��û��ǲ�Ҫ�á�
%
%% 2.״̬ģ�ͻ������
%
% *2.1 ǿ�ҽ���* ��ת��ͷ��Ҫ������ģ��Ԫ�ؽ��桢�ص���
%
% 2.2 ���κ�һ�㣬����ǻ����ϵ *����* ��������������״̬���ϡ�
%
% 2.3 ���ʹ�ó����� *����* Ҫ��һ�������̱����������������
%
% *2.4 ǿ�ҽ���* Ĭ����ת��ͷ�������¹淶
%
% * λ�÷��������Ͻǵ�����λ�ã�
% <matlab:SF5_2_4_jc0531_2_A SF5_2_4_jc0531_2_A>��
% * ͬһ���ֹ���ֶ��Ĭ����ת��ͷ��
% <matlab:SF5_2_4_jc0531_2_B SF5_2_4_jc0531_2_B>��
% * ����״̬�ڲ���Ĭ�ϼ�ͷ������� Junction �ϵĻ�����Ҫ��һ��������·������ĳһ��״̬��
% ��������
% <matlab:SF5_2_4_jc0531_2_C SF5_2_4_jc0531_2_C>,
% ���⣬����ͨ��������ϲ˵�������������,
% <matlab:winopen('stateflow_diagnostic.jpg') ����>��
%
% 2.5 *����* ȡ����ѡ 'Execute(enter) Chart At Initialization'��
%
% 2.6 �������Ƶ�����ͼ���״̬���������磬������ 3 �����ڡ�
% ������������Χ���Ͱ��ڲ����� Subchart �����磺
% <matlab:winopen('stateflow_layerNum.jpg') ����>
%
% 2.7 �������Ƶ�����ͼ�ڿɼ���״̬������һ�� 6 �� 9 ����
% <matlab:winopen('stateflow_stateNum.jpg') ����>
%
% 2.8 ��״̬��������һ����ͼ�ϱ�����ʱ��ʹ�� Subshart ��
%
% *2.9 ǿ�ҽ���* ��ҪΪ�˽���״̬��������ò���״̬��
% �������ĸ�����״̬
% <matlab:winopen('stateflow_parastate.jpg') ����>��
% ��ҪΪ�˷�������Ӷ���ĸ�״̬��
% <matlab:winopen('stateflow_paramState2.jpg') ����>
%
% 2.10 ����Ҫ��������ʹ�õ�״̬��Χ�ڣ�����������������״̬��Ҫ�õ�ͬһ�����ݡ�
%
% *2.11 ǿ�ҽ���* ��ֹ���ⲿ״ֱ̬����ת����״̬��
% ���Ǵ���״ֱ̬�������ⲿ��״̬�ǿ��ܵģ�
% <matlab:winopen('stateflow_transiton.jpg') ����>��
% ������������Ϊ���׸���״̬��װ�ĸ�����𲻱�Ҫ�Ĵ���
% 
%% 3.״̬��
%
% 3.1 Chart �ڵ�״̬�������������� Atomic sub-chart������Ϊ������ chart��
% Ҳ����˵ͬһ��Ԫ����״̬�ڲ�״̬������������ͬ��Ԫ����״̬�ڲ���������ͬ�����֡�
% <matlab:stateflow_uniqueStatename stateflow_uniqueStatename>��
%
% 3.2 ״̬���ֲ��ܰ���/�š�
%
% *3.3 ǿ�ҽ���* ״̬���������������ͬ��
% <matlab:winopen('stateflow_statename.jpg') ����>
%
% 3.4 ״̬��en��du�Լ�ex���밴�����˳����д���������ϵı���en,du����д����������������档
% <matlab:winopen('stateflow_actionorder.jpg') ����>
%
% 3.5 ����ͬ�����͵��������ֻдһ�顣
% <matlab:winopen('stateflow_action.jpg') ����>
%
% 3.6 ���鲻Ҫʹ��exit����������滻�ɶ�Ӧ��entry��
% ��ȷ��ʾ��������ʲô״̬��ִ�и���䡣
%
% 3.7~12 һЩ״̬������д�淶��
% <matlab:stateflow_stateLanguage stateflow_stateLanguage>��
%
% 3.13 ����״̬��ת�жϵı��������鲻Ҫʹ�� du �����¡�
% ��Ϊ du ������ڵ�ǰ��ת�ж�ʧ�ܣ�����״̬��Ż�ִ�С�
% ���Ի���ɣ���ת����������ӳ�һ������ʱ�䲽����ת��
% <matlab:stateflow_transitionUpdate stateflow_transitionUpdate>��
%% 4.�����Լ��������
%
% 4.1 *ǿ�ҽ���*дAction���ʱ���������ڵ����������д��һ�У��������������д����ע����������롣
% ����漰����ͬ�����������Ҫ��������ʽע�����ȼ���
% <matlab:Stateflow_action Stateflow_action>
% �����ͬ�ĸ�����������ε��ã����Կ�������һ�� flow graph function��
%
% 4.2 *����*������ִ�����ķ���λ����Ҫģ����ͳһ���Ƽ�д����ת��ͷ�Ŀ������ˣ�Ҳ����д����ת��ͷ�м䡣
% Ŀ�ľ�����ȷ��ʾ������/ִ�����Ĺ��������ҷ��ͳһ��
%
% 4.3 *����*��ת��ͷ��ע�������Է�������/ִ�������ϲ���
%
% 4.4 *�ϸ�֤*�������һ����ͷ����Ҫע��Ǩ�����������á�
% <matlab:Stateflow_actioncondition Stateflow_actioncondition>
%
% 4.5 *�Ƽ�*дִ������ʱ��ǰ�����ŵ�����һ�У�ÿһ��ִ������ռһ�в����;�š�
% <matlab:Stateflow_actioncondition Stateflow_actioncondition>
%
%% 5 ״̬Ǩ��
%
% 5.1 *����*״̬֮�����ת��ͷҪô��ֱҪôˮƽ��
% <matlab:Stateflow_statetransition Stateflow_statetransition>
% Ϊ�˸����Ա�ʾ�߼���ϵ�������� Junction ����ͷ�ֶΣ�ˮƽ��ͷһ��д��������ֱһ��д Action��
% ��ת��ͷ *ǧ��Ҫ*���� parent state �ı߽�,�ᵼ�� parent state �����������
%  <matlab:Stateflow_actionlineerror Stateflow_actionlineerror>
%
% 5.2 *���뱣֤*û����ת����(Backtracking)��
% <matlab:Stateflow_statebacktracking Stateflow_statebacktracking>
%
% 5.3~5 *����*��Ҫ�� transition Action�� *ǿ�ҽ���*��Ҫ���� conditon action��transition
% action��
% <matlab:Stateflow_action2 Stateflow_action2>
%
% 5.6 *ǿ�ҽ���*���ݱȽ�ֻ����ͬ��������֮����С���Ҫ�ԱȲ�ͬ���������ǣ�ʹ����ʾ������ת�� int16(i)��
% ע���޷������β�Ҫ�͸����Ƚϡ�
%
% 5.7 *ǿ�ҽ��鲻Ҫֱ�ӶԱ�������������ȡ�*
%
% * ��Ҫֱ�ӶԱ�������������ȣ����� var1 == var2,var1 ~=var2,var1 ~=var2, 
% ����ʹ�ò�ֵС��ĳһ����Сֵ�ķ�ʽ��ֱ�ӱȽ�ֻ����������֮�䡣
%
% 5.8 *ǿ�ҽ���λ�����&��|��^��~ֻ������λ���㡣������з�������ʹ��λ���㡣*
%
% * ʹ��֮ǰ����chart�����ﹴѡ *Enable C-bit operations*
% * ��������ʹ�� &&��||
% *  ��ͼ�� <matlab:winopen('stateflow_bitopp.jpg') ����>
%
% 5.9 *ǿ�ҽ����ֹ���߼������бȽ�����*
%
% * ��ֹ�Բ����������߼��������������͵����ݽ�ֹ������(0,1)�����߼�ֵ(true, false)�Ƚ����㡣
% ����ʹ�� NOT֮��Ĳ����������~ ���� ����
% *  ��ͼ�� <matlab:winopen('stateflow_bitoppBoolean.jpg') ����>
%
% 5.10 *ǿ�ҽ���ע�ⲻҪ���޷�������ȡ����*
%
% 5.11~13 a++���Լӻ����Լ� *����Ҫ����дΪһ�� action*
%
% ��������������ǲ�������
% <matlab:stateflow_incrementsaction stateflow_incrementsaction>
%
% 5.14 ������ͬһ��State�ڲ�Ҫ���ñ���
% <matlab:stateflow_reuseVariable stateflow_reuseVariable>
%
% 5.15 ���鲻Ҫֱ��ʹ�ú������ʽ��Ϊ�Ƚ�ֵ
% <matlab:stateflow_function stateflow_function>
%
% *ʹ���¼��߼��������*
% <matlat:winopen('Stateflow_time.jpg') ��ͼ>��
%
% *�ж����תʱ��������ת�Ŀ����Դ�С����ִ��˳�����򣬾��и߰�ȫ���ȼ����������ǰ��*
% <matlat:winopen('Stateflow_transitionpriority.jpg') ��ͼ>��
%
% ����ͼ�е� SteadyCruise ������ܵ������������Ϊ PlanelsCrashing ���и����ȼ�����������ǰ�档
% ���⣬����������� PlanelsCrashing�����¼������ʡ�
%
%% 6 ״̬�ڲ���ת
%
% <matlab:stateflow_internaltransition stateflow_internaltransition>
%
% 6.1 *ǿ�ҽ���*���е�״̬���ڲ���ת���߱����� State ���ߵ�����档
%
% 6.2 *ǿ�ҽ���*�� State �ڲ���Ҫ���� en��du,ex����������ͼ��
% ��Ϊ����ִ��˳��ֱ�ۡ�
%
% 6.3~4 ����ͬһ�� state ��ò�Ҫ�ж���ڲ���ת��
% ����ж���ڲ���ת�� *ǿ�ҽ���* ��ת�߰��մ��ϵ��µ����ȼ����á�
% 
%
%% 7 ����ͼ��������
%
% 7.1 *ǿ�ҽ���*���ػ�����������ͼ��������ͷ��ˮƽ��������ͷ����ֱ������ѭ���ṹ��
% ��ͷ��������������condition action����Ҫ������ͼ��ʹ�� transition action��
%
% 7.2~4 *ǿ�ҽ���*����������ͼʹ�����õĻ���ģʽ��
% ��Ҫʹ��ѭ�������о������㡣
%
% 7.5 *ǿ�ҽ���*��һ������Ҫ�����ķ�֧·����ֹ backtracking��
% ������֧·���ȼ���������Ϊ��͡�
% <matlab:stateflow_unconditionflow stateflow_unconditionflow>
%
%% 8 ����ͼϸ�ڹ���
%
% 8.1 *����*������ͼ�����У�����������֧·������ע�ͣ���ʽ˵������Ҫ�κζ���������������ӡ�
%
% 8.2~4 *����*ֻ��һ���ط�������ֵ��ֵ�� 
% ���⣬����ͼ�����ֻ��һ���յ�Juntion�������յ� Junction ��ֻ��һ����ת�ߡ�
% �����ͱȽ�����ı�ʾ������ͼ���յ������
% <matlab:stateflow_flowfcn stateflow_flowfcn>
%% 9 �¼�
%
% 9.1  *ע��*���е� Event �����붨���� chart �㼶�Լ����£���ֹ������ģ�Ͳ㡣
% ��ͬ��chart֮��û��local�¼��Ľ�����09b�Ժ���Ϊ���������֡�
%
% 9.2  *����* Event ����Ϊ Function call��ϵͳ��ʹ�á�״̬ת������������ʹ�� Event��
% ���û����ȫ��� Event ԭ���������Ϊ״̬ת�������Ļ��������л���ɵݹ����һ�������ڴ������Ρ�
%
% 9.3  *����*������� Event �� State �˳�ʱ����Ҫ���¼����õ���ϵͳ���ã�
% ����ʹ�� bind��
% <matlab:ex_bind_fcn_call_subsys_to_state ex_bind_fcn_call_subsys_to_state>
%
% 9.4 *ǿ�ҽ���*����ʱ��Ĺ㲥�������»���ԭ��
%
% * ֻ������з����ԵĹ㲥�¼���ʹ�� send ���� state.eventname��
% * ���Ҫ�㲥�����״̬��ʹ�ö�� send ��䡣
%
%% 10.Stateflow �ڵĺ���
%
% 10.1  *����*�����������͵�ѡ�û������»���ԭ��
%
% * ����� if/then/else ���߼���ʹ�� Graphical ������
% * ����Ǵ��ݺ����������Լ����ʹ�� Simulink ������
% * ����Ǹ��ӵķ��̻��� if/then/else ������ʹ�� MATLAB ������
%
% 10.2  *����*�Ƿ��� Stateflow ��ʹ�� Simulink ����ʱ
% ��Ҫ����������Щ������
%
% * ֻʹ�õ����ص� chart ���� ���߻�ʹ�ô� simulink ���������źţ�
% * �� chart �ڵĶ���ط����õ���
% * ����ÿ��ʱ�䲽�����ã�
% <matlab:stateflow_internalfunction stateflow_internalfunction>
%
% 10.3  *����*��Ҫ����Ƕ��Simulink����ǶStateflow
%
% 10.3  *һ����Ҫ*�� chart ��ʹ��ml.cos(wheelAng)�����﷨������MATLAB����
%
% *ע��Function���õ�λ�ã���ʾ����ȫ�ֺ���������Ƕ����*
%  <matlab:winopen('Stateflow_functioncallplace.jpg') ��ͼ>
% <matlab:Stateflow_SD104 Stateflow_SD104>
%% ������
%
% * ����������ʱ��ʹ�� := ���ţ�C��������
% <matlab:Stateflow_SDfixpoint Stateflow_SDfixpoint>
% * ÿһ��ֻ����һ����������
% <matlab:Stateflow_SDfixpoint2 Stateflow_SDfixpoint2>