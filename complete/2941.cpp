#include <iostream>
#include <cstring>

std::string str;
int answer;

int main()
{
    std::cin >> str;
    for (int index = 0; index < str.length();)
    {
        if (strncmp(str.c_str() + index, "c=", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else if (strncmp(str.c_str() + index, "c-", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else if (strncmp(str.c_str() + index, "dz=", 3) == 0)
        {
            answer++;
            index += 3;
        }
        else if (strncmp(str.c_str() + index, "d-", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else if (strncmp(str.c_str() + index, "lj", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else if (strncmp(str.c_str() + index, "nj", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else if (strncmp(str.c_str() + index, "s=", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else if (strncmp(str.c_str() + index, "z=", 2) == 0)
        {
            answer++;
            index += 2;
        }
        else
        {
            answer++;
            index++;
        }
    }
    std::cout << answer << "\n";
    return 0;
}