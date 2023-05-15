# ifndef SED_HPP
# define SED_HPP
#include <iostream>
#include <fstream>
class Sed{
    public:
        Sed();
        std::string MyReplace(std::string source, std::string s1, std::string s2);

};
#endif