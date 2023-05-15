# include "Sed.hpp"

Sed::Sed() {
    std::cout << " a Sed object created successfuly"<< std::endl;
}

std::string Sed::MyReplace(std::string source, std::string s1, std::string s2)
{
    size_t location;
    if (s1.empty())
        return (source);
    location = 0;
    while(1)
    {
        location = source.find(s1, location);
        if (location == std::string::npos)
            break ;
        source.erase(location, s1.length());
        source.insert(location, s2);
        location += s2.length();
    }
    return (source);
}