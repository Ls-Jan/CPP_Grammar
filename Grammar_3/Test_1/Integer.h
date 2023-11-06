#pragma once
//【写着搞笑的整型类】

class Integer {//一个没啥用的类，写着搞笑的
public:
	Integer(int val);//初始化时传入整数值
	~Integer();
	operator int();//隐式类型转换
public:
	int Get_Val();//获取值
	void Set_Val(int val);//设置值
	static int Get_Sum();//获取所有Integer对象的值之和
	static int Get_Max();//获取所有Integer对象中的最大值

private:
	int __val;//整数值
	static int __sum;//所有Integer对象的值之和
};






//——————————————————————————————————————————————————————

inline int Integer::Get_Val(){//【内联函数】获取记录的整数值
	return this->__val;
}
