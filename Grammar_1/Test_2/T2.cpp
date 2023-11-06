//静态变量的定义

static int num;//这个也是定义(默认值为0)，同样的，不将重复定义注释掉那么也会编译报错
static int num;
static int num;
static int num;
static int num;

#include<stdio.h>
int main() {
	num *= num;
	printf_s("%d\n", num);
	return 0;
}



