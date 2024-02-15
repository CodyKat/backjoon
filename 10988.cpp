#include <iostream>
std::string str;

int main()
{
    std::cin >> str;
    int len = str.size();

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            std::cout << "0\n";
            return 0;
        }
    }
    std::cout << "1\n";
    return 0;
}