//��/�ṹ��ĵײ����ݿ�ͨ��ָ��ƫ�ƽ��з���


class Test {
public:
	int num_1;
	char mid;
	int num_2;
};

#include<stdio.h>
int main() {
	Test t{ 100,'M',200 };
	int* val_d1, * val_d2;
	int* val_p1, * val_p2;

	val_d1 = &t.num_1;
	val_d2 = &t.num_2;

	char* ptr = (char*)&t;//ʹ��ָ�롣char���Ϳ�������byte���ͣ�������1�ֽ�Ϊ��λ����ƫ��
	val_p1 = (int*)(ptr + 0);
	val_p2 = (int*)(ptr + 8);//Ϊʲô������+8������+5����Ҳ���ˣ������Ǹ����ڴ���롱�й�

	printf_s("%d,%d\n", *val_d1, *val_d2);
	printf_s("%d,%d\n", *val_p1, *val_p2);
	printf_s("%d,%d\n", val_d1 == val_p1, val_d2 == val_p2);
}



