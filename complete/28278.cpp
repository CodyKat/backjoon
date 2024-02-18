#include <iostream>
#include <stack>

using namespace std;
stack<int> s;
int main()
{
    int T, command, N;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> command;
        switch (command)
        {
        case 1:
            cin >> N;
            s.push(N);
            break;
        case 2:
            if (s.size() == 0)
                cout << "-1\n";
            else
            {
                int top = s.top();
                s.pop();
                cout << top << '\n';
            }
            break;
        case 3:
            cout << s.size() << '\n';
            break;
        case 4:
            if (s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
            break;
        case 5:
            if (s.size() == 0)
                cout << "-1\n";
            else
            {
                int top = s.top();
                cout << top << '\n';
            }
            break;
        default:
            break;
        }
    }
    return 0;
}