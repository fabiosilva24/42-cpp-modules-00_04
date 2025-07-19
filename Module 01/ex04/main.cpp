#include <string>
#include <fstream>
#include <iostream>
#include "replace_func.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error ./Usage Filename string1 string2" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::fstream read_file;
    std::ofstream replace_file;
    std::string line;

    if (s1.empty() || s2.empty())
    {
        std::cerr << "String 1 and String 2 can't be empty" << std::endl;
        return (1);
    }

    read_file.open(filename.c_str());
    if (read_file.fail())
    {
        std::cout << "Error Opening The File" << std::endl;
        return (1);
    }
    replace_file.open((filename + ".replace").c_str());
    if (replace_file.fail())
    {
        std::cout << "Error creating output file" << std::endl;
        return (1);
    }
    while (std::getline(read_file, line))
    {
        line = ft_replace(line, s1, s2);
        replace_file << line << "\n";
    }
    read_file.close();
    replace_file.close();
    return (0);
}




