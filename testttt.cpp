//
// Created by Mouad Mounaji on 5/16/23.
//
// CPP Program to demonstrate the use of copy constructor
// and assignment operator
#include <iostream>
using namespace std;

class Test {
public:
       static int i;
    static void print(){
        std::cout << i << std::endl;
      }
      Test() {}
      Test(const Test& t)
      {
          cout << "Copy constructor called " << endl;
      }
      Test& operator=(const Test& t){
          cout << "Assignment operator called " << endl;
          return *this;
      }
};

int Test::i=5;
// Driver code
int main()
{
    Test t1;
//t2    t2 = t1;
//    // assignemnet op
//    Test t3 = t1; //cpy cons
   Test::print();
    getchar();
    return 0;
}
