#include"T5_Extra.h"
#include<stdio.h>

inline void Test::Print() {//删去多余inline，或是将该函数定义放置于头文件T5_Extra.h中，亦或是将函数定义放于类声明内
	printf_s("Hello World!\n");
}

