#include <iostream>
#include <stack>

// char str[50];
// std::stack<int> stack;
// int answer;
// int curr_sum = 1;
// void error()
// {
//     std::cout << '0';
//     exit(1);
// }

// int main()
// {
//     int tmp;
//     std::cin >> str;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == '(')
//         {
//             stack.push(2);
//             curr_sum *= 2;
//         }
//         else if (str[i] == ')')
//         {
//             tmp = stack.top();
//             stack.pop();
//             if (tmp != 2)
//                 error();
//             if (stack.size() == 0)
//             {
//                 answer += curr_sum;
//                 curr_sum = 1;
//             }
//         }
//         if (str[i] == '[')
//         {
//             stack.push(3);
//             curr_sum *= 3;
//         }
//         else if (str[i] == ']')
//         {
//             tmp = stack.top();
//             stack.pop();
//             if (tmp != 3)
//                 error();
//             if (stack.size() == 0)
//             {
//                 answer += curr_sum;
//                 curr_sum = 1;
//             }
//         }
//     }
//     std::cout << answer;
//     return 0;
// }

char str[50];
int small_sum(char *str);
int answer;
int i;

int big_sum(char *str)
{
    i++;
    if (str[0] == '(')
        return 3 * small_sum(str + 1);
    else if (str[0] == '[')
        return 3 * big_sum(str + 1);
    else
    {
        if (str[-1] != ')' && str[-1] != ']')
            i++;
        return 1;
    }
}

int small_sum(char *str)
{
    i++;
    if (str[0] == '(')
        return 2 * small_sum(str + 1);
    else if (str[0] == '[')
        return 2 * big_sum(str + 1);
    else
    {
        if (str[-1] != ')' && str[-1] != ']')
            return 1;
    }
}

int main()
{
    std::cin >> str;
    int str_len = strlen(str);
    while (i < str_len)
    {
        if (str[i] == '(')
        {
            answer += 2 * small_sum(str + i + 1);
        }
        else
        {
            answer += 3 * big_sum(str + 1 + i);
        }
        i++;
    }
    std::cout << answer;
    return 0;
}