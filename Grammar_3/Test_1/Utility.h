#pragma once
//【通用函数】
#include<vector>
#include<stdio.h>

extern void Print_Enter(int count=1);//【外部函数】简单输出个换行符
template<typename T>
int Search(std::vector<T>lst,T target);//【模板函数】对已升序排序的列表lst以二分查找算法查找target的索引位置
















//——————————————————————————————————————————————————————

template<typename T>
int Search(std::vector<T>lst, T target) {//模板函数的定义比较特殊，它只能落于头文件中。原因我忘了，感兴趣的可以自己去查
	int L = 0;
	int R = lst.size();
	int M = (L + R) / 2;
	while (L+1 < R) {
		int mid = lst[M];
		if (mid== target)//找到目标
			return M;
		if (mid < target)
			L = M;
		else
			R = M;
		M = (L + R) / 2;
	}
	return R;
}

