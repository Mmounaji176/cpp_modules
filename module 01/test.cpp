#include <iostream>
using namespace std;

class Test{

public:
    int x;
    Test()
    {
        cout<<"Empty or Default Constructor"<<endl;
    }
    Test(int x)
    {
        cout<<"Valued constructor"<<endl;
    }
    ~Test()
    {
        cout<<"Destructor"<<x<<endl;
    }
    Test show(Test obj)
    {
        Test tt;
        tt.x=20;
        return tt;
    }
};
int main()
{
	Test t1;
    Test t2(20);
    t2.show(t2);

    return 0;
}