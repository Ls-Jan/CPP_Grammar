//在包含的cpp文件中将函数定义为static以规避重定义


#include<stdio.h>

extern int Func(int);
int main() {
	printf_s("%d\n", Func(100));
	return 0;
}

