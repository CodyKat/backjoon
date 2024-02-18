#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    string command;
    int N;
    for (int i = 0; i < T; i++)
    {
        cin >> command;
        if (command == "push")
        {
            cin >> N;
            q.push(N);
        }
        else if (command == "pop")
        {
            if (q.size() == 0)
                cout << "-1\n";
            else
            {
                int tmp = q.front();
                cout << tmp << '\n';
                q.pop();
            }
        }
        else if (command == "size")
        {
            cout << q.size() << '\n';
        }
        else if (command == "empty")
        {
            if (q.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (command == "front")
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.front() << '\n';
        }
        else // back
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.back() << '\n';
        }
    }
    return 0;
}