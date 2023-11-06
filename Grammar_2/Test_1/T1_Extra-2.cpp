

#include<stdio.h>

static int num = 10;
extern void Func_1(int);

static void Func_1(int val) {
	return;
}

void Func_2(int val) {
	Func_1(777);//可以看到这里并没有调用外部文件的Func_1，而是本文件下的静态函数Func_1。说明本文件下的静态函数优先级更高
	printf_s("%d,%d\n", num, val);
}

static void Func_0() {//本文件下的静态函数不对外，也就是其他cpp文件是没法访问到这里的函数Func_0
	printf_s("!!!\n");
}


