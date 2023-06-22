#include "Bureaucrat.hpp"

int main(void) {
  try {
    Bureaucrat b("messi", 1);
    std::cout << b << std::endl;
  } catch (std::exception &e) {
    std::cout << "Grade out of range " << e.what() << std::endl;
  }
  // std::cout << b << std::endl; // this line will not be executed bs of stack unwinding
  std::cout << "--------------------program continue-------------------------" << std::endl;
  return (0);
}