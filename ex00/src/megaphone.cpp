#include <iostream>
#include <cctype>

typedef unsigned long int ulong;

void toUpper(std::string str)
{
    for (ulong i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
    std::cout << str;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        toUpper("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

    for (int i = 1; i < argc; i++)
    {
        toUpper(argv[i]);
        std::cout << " ";
    }

    std::cout << std::endl;
}