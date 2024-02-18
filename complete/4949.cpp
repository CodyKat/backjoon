#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> s;
bool flag;

int main()
{
    string str;
    int size;

    while (1)
    {
        str = "";
        getline(cin, str);
        if (str.back() != '.')
        {
            flag = false;
            goto A;
        }
        flag = true;
        if (str.length() == 1 && str[0] == '.')
            return 0;
        size = str.length();
        for (int i = 0; i < size; i++)
        {
            int poped;
            switch (str[i])
            {
            case '(':
                s.push(1);
                break;
            case ')':
                if (s.empty())
                {
                    flag = false;
                    goto A;
                }
                poped = s.top();
                if (poped != 1)
                {
                    flag = false;
                    goto A;
                }
                s.pop();
                break;
            case '[':
                s.push(2);
                break;
            case ']':
                if (s.empty())
                {
                    flag = false;
                    goto A;
                }
                poped = s.top();
                if (poped != 2)
                {
                    flag = false;
                    goto A;
                }
                s.pop();
                break;
            default:
                break;
            }
        }
    A:
        if (s.size())
            flag = false;
        while (s.size())
            s.pop();
        if (flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}