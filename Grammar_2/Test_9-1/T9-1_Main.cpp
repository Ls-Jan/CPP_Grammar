
class Test {
public:
	int a;
	void Print();
};

int main() {
	Test t{ 0x44424000 };
	t.Print();
	return 0;
}
