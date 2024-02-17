#include <iostream>
#include <set>

using namespace std;

set<string> s;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        string substring;
        for (int j = 1; j < len - i + 1; j++)
        {
            substring = str.substr(i, j);
            s.insert(substring);
        }
    }
    cout << s.size() << '\n';
    return 0;
}