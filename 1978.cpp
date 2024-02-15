#include <iostream>
int N;
std::string str;
int answer;
bool flag;

int main()
{
    std::cin >> N;
    // std::cin >> str;
    int tmp;
    for (size_t i = 0; i < N; i++)
    {
        flag = false;
        scanf("%d", &tmp);
        if (tmp == 1)
            continue;
        for (size_t i = 2; i < tmp; i++)
        {
            if (tmp % i == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            answer++;
    }
    std::cout << answer << "\n";
    return 0;
}