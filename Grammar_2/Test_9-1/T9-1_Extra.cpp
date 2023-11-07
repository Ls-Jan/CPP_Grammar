
class Test {
public:
	float x;
	void Print();
};

#include<stdio.h>
void Test::Print() {
	printf_s("%.0f\n", this->x);
}
