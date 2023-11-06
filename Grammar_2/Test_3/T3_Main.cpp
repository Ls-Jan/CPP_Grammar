//包含cpp文件将导致重定义

#include<stdio.h>
#include"T3_Extra.cpp"

int main() {
	printf_s("%d\n", Func(100));
	return 0;
}

