#include <iostream>
#include <stack>

std::stack<char> stack;
char str[50];
int answer;
int len;

void error()
{
    std::cout << "0";
    exit(1);
}

bool is_valid()
{
    char tmp;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '(')
            stack.push('(');
        else if (str[i] == '[')
            stack.push(3);
        else if (str[i] == ')')
        {
            tmp = stack.top();
            stack.pop();
            if (tmp !=)
                return false;
        }
        else if (str[i] == ']')
        {
            tmp = stack.top();
            stack.pop();
            if (tmp != 3)
                return false;
        }
        else
            return false;
    }
    if (stack.size() != 0)
        return false;
    return true;
}

int main()
{
    std::cin >> str;
    len = strlen(str);
    if (is_valid() == false)
        error();

    // valid stack;
    // ( () [[]] )   +  ([])
}