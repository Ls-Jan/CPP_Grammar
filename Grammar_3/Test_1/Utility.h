#pragma once
//��ͨ�ú�����
#include<vector>
#include<stdio.h>

extern void Print_Enter(int count=1);//���ⲿ����������������з�
template<typename T>
int Search(std::vector<T>lst,T target);//��ģ�庯������������������б�lst�Զ��ֲ����㷨����target������λ��
















//������������������������������������������������������������������������������������������������������������

template<typename T>
int Search(std::vector<T>lst, T target) {//ģ�庯���Ķ���Ƚ����⣬��ֻ������ͷ�ļ��С�ԭ�������ˣ�����Ȥ�Ŀ����Լ�ȥ��
	int L = 0;
	int R = lst.size();
	int M = (L + R) / 2;
	while (L+1 < R) {
		int mid = lst[M];
		if (mid== target)//�ҵ�Ŀ��
			return M;
		if (mid < target)
			L = M;
		else
			R = M;
		M = (L + R) / 2;
	}
	return R;
}

