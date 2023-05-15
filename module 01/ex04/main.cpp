#include "Sed.hpp"

int main(int ac, char ** av)
{
    Sed obj;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string newContent;
    if (ac != 4)
    {
        std::cerr << " bad number of arguments";
        return (1);
    }
    std::ifstream ifs(av[1]);
    if (!ifs.is_open()) {
        std::cerr << "unable to open input file" << std::endl;
        return 1;
    }
    std::getline(ifs, newContent, '\0');
    ifs.close();
    newContent = obj.MyReplace(newContent, s1, s2);
    std::ofstream ofs(av[1] + std::string(".replace"));
    if (!ofs.is_open()){
        std::cerr << "unable to open output file" << std::endl;
        return 1;
    }
    ofs << newContent;
    ofs.close();
    return 0;
}
