//¡¾Ö÷³ÌĞò¡¿

#include"Integer.h"
#include"Utility.h"

int main() {
	Integer n1(1);
	Integer n2(3);
	Integer n3(5);
	printf_s("Create: %d,%d,%d\n",n1,n2,n3);
	printf_s("Sum: %d\n",Integer::Get_Sum());
	printf_s("Max: %d\n",Integer::Get_Max());
	Print_Enter();

	Integer n4(7);
	Integer n5(9);
	printf_s("Create: %d,%d\n", n4, n5);
	printf_s("Sum: %d\n", Integer::Get_Sum());
	printf_s("Max: %d\n", Integer::Get_Max());
	Print_Enter();

	int val = 100;
	printf_s("SetVal: %d -> %d\n",n4,val);
	n4.Set_Val(val);
	printf_s("Sum: %d\n", Integer::Get_Sum());
	printf_s("Max: %d\n", Integer::Get_Max());
	Print_Enter();

	return 0;
}


