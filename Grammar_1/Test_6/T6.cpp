//函数重定义

int Func();
int Func();
int Func();
int Func();
int Func();
int Func() {//函数定义(多了也会报错
	return 5;
}
int Func() {
	return 5;
}

#include<stdio.h>

int main() {
	printf_s("%d\n", Func());
	return 0;
}




