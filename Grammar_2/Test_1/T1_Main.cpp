//��̬����������

extern int num;
extern void Func_1(int);
extern void Func_2(int);

int main() {
	num = 100;
	Func_1(num);
	Func_2(num);

	//extern void Func_0();//Func_0��T1_Extra-2.cpp�¶���ľ�̬������
	//Func_0();//ȡ��������ע�ͺ�IDE����ʾFunc_0δ����(��Ϊ��̬����������
	return 0;
}

