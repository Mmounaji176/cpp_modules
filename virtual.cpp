#include <iostream>

class Base {
public:
    virtual void doSomething() {
        std::cout << "based"<< std::endl;
    }
};

class Derived : public Base {
public:
    void doSomething()  {
        std::cout << "derived"<< std::endl;
        // Derived implementation
    }
};
int main() {
    Derived* basePtr = new Base();
    basePtr->doSomething();  // Calls the doSomething() function of Derived


    return 0;
}
