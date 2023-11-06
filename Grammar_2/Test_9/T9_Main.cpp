
#include<stdio.h>

struct Float {//ʹ����λ�򣬽�������32λ���3�����֣����IEEE754�������洢
	int fraction : 23;
	int exponent : 8;
	int sign : 1;
};


void Explain_F(float val) {
	Float* f = (Float*)&val;//ǿ��ת������ת������ָ��(��ΪҪ���ʵײ�����)
	int sign = f->sign & 0x1;
	int exponent = (f->exponent )& 0xFF;
	int fraction = (f->fraction)&0x7FFFFF;
	printf_s("%.3f  %u %d %u \n",val, sign,exponent,fraction);
}

int main() {
	for (auto i = 0; i < 10; ++i) {
		float val = i + i/10.0;
		Explain_F(val);
		//����https://www.h-schmidt.net/FloatConverter/IEEE754.html
		//�������Ƿ�һ��
	}
	return 0;
}


