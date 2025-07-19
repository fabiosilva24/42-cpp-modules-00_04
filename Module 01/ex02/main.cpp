#include <iostream>

int main()
{
    std::string str =  "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;


    std::cout << "string memory adress: " << &str << " \n" << "string variable: " << str << std::endl << "\n";
    std::cout << "stringPTR memory adress: " << &stringPTR << " \n" << "stringPTR variable: " << *stringPTR << std::endl << "\n";
    std::cout << "stringREF memory adress: " << &stringREF << " \n" << "stringREF variable: " << stringREF << std::endl;

    return (0);
}