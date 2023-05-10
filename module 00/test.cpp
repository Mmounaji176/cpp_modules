
class test {

public:
	//attributes
	char a1;
	int a2;
	float a3;

	test(char p1, int p2, float p3);
	~test(void);
};

test::test(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
}

test::test(char p1, int p2, float p3) 
{
	std::cout << "Constructor called" << std::endl;
	this->a1 = p1;
	this->a2= p2;
	this->a3 = p3;
}
