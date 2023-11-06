//外部变量的声明与定义

extern int num;//这些是声明，多少个都不会造成影响
extern int num;
extern int num;
extern int num;
extern int num;
extern int num=100;//这个是定义，多了一样会报错
extern int num=100;


#include<stdio.h>
int main() {
	num *= num;
	printf_s("%d\n", num);
	return 0;
}

