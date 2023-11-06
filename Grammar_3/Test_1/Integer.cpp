#include "Integer.h"
#include"Utility.h"

#include<vector>


static std::vector<int>__record;//����̬���ݣ�������cppʹ�á���¼Integer�����ֵ(��������)���Ա�������ֵ
//int Integer::__sum = 0;//���ྲ̬���ݳ�Ա�ĳ�ʼ�������û�д����������ܸ�Ҫ�䵽ĳ��cpp�ļ��У�����������ݳ�Ա��privateҲһ��

static void Insert(int val);//��������������__record�в�����ֵ
static void Erase(int val);//�������������Ƴ�__record�е���ֵ


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


//������������������������������������������������������������������������������������������������������������

static void Insert(int val) {//����̬������������cppʹ�á���__record�в�����ֵ
	int pos = Search(__record, val);
	auto iter = __record.begin() + pos;
	__record.insert(iter, val);
}
static void Erase(int val) {//����̬������������cppʹ�á��Ƴ�__record�е���ֵ
	int pos = Search(__record, val);
	auto iter = __record.begin() + pos;
	if (*iter == val)
		__record.erase(iter);
}