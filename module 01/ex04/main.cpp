#include "sed.hpp"

int main(int ac, char ** av)
{
    if (ac != 4)
    {
        std::cerr << " bad number of arguments";
        return (1);
    }
    std::ifstream ifs(argv[1]);
    if (!ifs.is_open())
    {
        std::cerr << "Error: Unable to open input file" << std::endl;
        return 1;
    }

    // Perform the string replacement
    std::string result;
    std::string from = argv[2];
    std::string to = argv[3];

    std::getline(ifs, result, '\0');
    ifs.close();

    result = obj.ft_replace(result, from, to);
    // Open the output file
    std::ofstream ofs(argv[1] + std::string(".replace"));
    if (!ofs.is_open())
    {
        std::cerr << "Error: Unable to open output file" << std::endl;
        return 1;
    }

    // Write the modified string to the output file
    ofs << result;
    ofs.close();

    return 0;
}
