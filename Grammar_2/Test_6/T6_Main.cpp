//类/结构体的底层数据可通过指针偏移进行访问


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

	char* ptr = (char*)&t;//使用指针。char类型可以视作byte类型，方便以1字节为单位进行偏移
	val_p1 = (int*)(ptr + 0);
	val_p2 = (int*)(ptr + 8);//为什么这里是+8而不是+5，我也忘了，好像是跟“内存对齐”有关

	printf_s("%d,%d\n", *val_d1, *val_d2);
	printf_s("%d,%d\n", *val_p1, *val_p2);
	printf_s("%d,%d\n", val_d1 == val_p1, val_d2 == val_p2);
}



