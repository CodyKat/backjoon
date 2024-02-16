#include <iostream>
#include <set>

std::set<char> set;
int N;
std::string str;
char curr_char;
bool flag;
int answer;

int main()
{
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> str;
        flag = false;
        for (int j = 0; j < str.length(); j++)
        {
            if (j == 0)
            {
                curr_char = str[j];
                set.insert(curr_char);
            }
            else
            {
                if (curr_char == str[j]) // 연연속속되되는는중
                {
                    continue;
                }
                else // 새로운 문자등장
                {
                    if (set.find(str[j]) == set.end())
                    {
                        curr_char = str[j];
                        set.insert(curr_char);
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag == false)
            answer++;
        set.clear();
    }
    std::cout << answer << "\n";
    return 0;
}