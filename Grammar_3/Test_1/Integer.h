#pragma once
//��д�Ÿ�Ц�������ࡿ

class Integer {//һ��ûɶ�õ��࣬д�Ÿ�Ц��
public:
	Integer(int val);//��ʼ��ʱ��������ֵ
	~Integer();
	operator int();//��ʽ����ת��
public:
	int Get_Val();//��ȡֵ
	void Set_Val(int val);//����ֵ
	static int Get_Sum();//��ȡ����Integer�����ֵ֮��
	static int Get_Max();//��ȡ����Integer�����е����ֵ

private:
	int __val;//����ֵ
	static int __sum;//����Integer�����ֵ֮��
};






//������������������������������������������������������������������������������������������������������������

inline int Integer::Get_Val(){//��������������ȡ��¼������ֵ
	return this->__val;
}
