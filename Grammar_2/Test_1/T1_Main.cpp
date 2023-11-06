//静态函数不对外

extern int num;
extern void Func_1(int);
extern void Func_2(int);

int main() {
	num = 100;
	Func_1(num);
	Func_2(num);

	//extern void Func_0();//Func_0是T1_Extra-2.cpp下定义的静态函数，
	//Func_0();//取消这两行注释后IDE会提示Func_0未定义(因为静态函数不对外
	return 0;
}

