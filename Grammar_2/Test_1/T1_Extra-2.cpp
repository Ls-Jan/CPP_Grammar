

#include<stdio.h>

static int num = 10;
extern void Func_1(int);

static void Func_1(int val) {
	return;
}

void Func_2(int val) {
	Func_1(777);//���Կ������ﲢû�е����ⲿ�ļ���Func_1�����Ǳ��ļ��µľ�̬����Func_1��˵�����ļ��µľ�̬�������ȼ�����
	printf_s("%d,%d\n", num, val);
}

static void Func_0() {//���ļ��µľ�̬���������⣬Ҳ��������cpp�ļ���û�����ʵ�����ĺ���Func_0
	printf_s("!!!\n");
}


