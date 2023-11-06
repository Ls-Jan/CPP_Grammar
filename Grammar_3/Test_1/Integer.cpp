#include "Integer.h"
#include"Utility.h"

#include<vector>


static std::vector<int>__record;//【静态数据，仅供本cpp使用】记录Integer对象的值(升序排序)，以便查找最大值
//int Integer::__sum = 0;//【类静态数据成员的初始化】这可没有错，变量定义总该要落到某个cpp文件中，哪怕这个数据成员是private也一样

static void Insert(int val);//【函数声明】向__record中插入数值
static void Erase(int val);//【函数声明】移除__record中的数值


Integer::Integer(int val) {
	Insert(val);
	this->__val = val;
	this->__sum += val;
}

Integer::~Integer() {
	Erase(this->__val);
	this->__sum -= this->__val;
}

void Integer::Set_Val(int val) {
	Erase(this->__val);
	Insert(val);
	Integer::__sum += val - this->__val;
	this->__val = val;
}

int Integer::Get_Max() {
	return __record.back();
}

int Integer::Get_Sum() {
	return Integer::__sum;
}

Integer::operator int(){
	return this->Get_Val();
}


//——————————————————————————————————————————————————————

static void Insert(int val) {//【静态函数，仅供本cpp使用】向__record中插入数值
	int pos = Search(__record, val);
	auto iter = __record.begin() + pos;
	__record.insert(iter, val);
}
static void Erase(int val) {//【静态函数，仅供本cpp使用】移除__record中的数值
	int pos = Search(__record, val);
	auto iter = __record.begin() + pos;
	if (*iter == val)
		__record.erase(iter);
}