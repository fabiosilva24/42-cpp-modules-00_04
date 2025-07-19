#include "replace_func.hpp"

std::string ft_replace(std::string &string, std::string &s1, std::string &s2)
{
    std::string result;
    size_t i = 0;

    while (i < string.length())
    {
        if (string.compare(i, s1.length(), s1) == 0)
        {
            result += s2;
            i += s1.length();
        }
        else
        {
            result += string[i];
            i++;
        }
    }
    return (result);
}