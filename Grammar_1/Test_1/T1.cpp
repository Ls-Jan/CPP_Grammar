//外部变量的定义

int num;//这个是定义(会被赋予默认值0)。如果不将多余定义注释掉那么编译会报错
int num;
int num;
int num;
int num;


#include<stdio.h>
int main() {
	num *= num;
	printf_s("%d\n", num);
	return 0;
}



