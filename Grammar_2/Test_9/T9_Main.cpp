
#include<stdio.h>

struct Float {//使用了位域，将浮点数32位拆成3个部分，详见IEEE754浮点数存储
	int fraction : 23;
	int exponent : 8;
	int sign : 1;
};


void Explain_F(float val) {
	Float* f = (Float*)&val;//强制转换，但转换的是指针(因为要访问底层数据)
	int sign = f->sign & 0x1;
	int exponent = (f->exponent )& 0xFF;
	int fraction = (f->fraction)&0x7FFFFF;
	printf_s("%.3f  %u %d %u \n",val, sign,exponent,fraction);
}

int main() {
	for (auto i = 0; i < 10; ++i) {
		float val = i + i/10.0;
		Explain_F(val);
		//访问https://www.h-schmidt.net/FloatConverter/IEEE754.html
		//检验结果是否一致
	}
	return 0;
}


