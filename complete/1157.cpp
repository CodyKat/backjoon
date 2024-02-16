#include <iostream>
#include <string>

std::string str;
char answer;
int main()
{
    std::cin >> str;
    int mul['Z' - 'A' + 1];
    for (int i = 0; i < 'Z' - 'A' + 1; i++)
        mul[i] = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            mul[str[i] - 'a']++;
        }
        else
        {
            mul[str[i] - 'A']++;
        }
    }
    int max = -1;
    for (int i = 0; i < 'Z' - 'A' + 1; i++)
    {
        if (mul[i] == 0)
            continue;
        if (mul[i] == max)
        {
            answer = '?';
            break;
        }
        else if (mul[i] > max)
        {
            max = mul[i];
            answer = i + 'A';
        }
    }
    std::cout << answer << "\n";
    return 0;
}