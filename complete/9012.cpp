#include <iostream>
#include <stack>

using namespace std;
string str;
int len;
stack<int> stk;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> str;
        len = str.size();

        for (int j = 0; j < len; j++)
        {
            if (str[j] == '(')
            {
                stk.push(1);
            }
            else
            {
                if (stk.size() == 0)
                {
                    cout << "NO\n";
                    goto A;
                }
                else
                {
                    stk.pop();
                }
            }
        }
        if (stk.size() == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    A:;
        while (stk.size() != 0)
            stk.pop();
    }
    return 0;
}