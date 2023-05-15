# include "sed.hpp"

Sed::Sed() {
    std::cout << " a Sed object created successfuly"<< std:endl;
}

std::string Sed::MyReplace(std::string source, std::string s1, std::string s2)
{
    int location;
    if (s1.empty())
        return (source);
    location = source.find(s1);
    // Check if position is -1 or not
    while(location != std::string::npos)
    {
        source.erase(location, s1.size());
        source.insert(location, s2);
        location = source.find(s1);
    }
    return (source);
}