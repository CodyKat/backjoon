#include <iostream>
#include <algorithm>
using namespace std;

string *s;
int N;

bool compare(const string &s1, const string &s2)
{
    if (s1.length() < s2.length())
        return true;
    else if (s1.length() == s2.length())
        return s1 < s2;
    return false;
}

int main()
{
    string before_print = "";
    cin >> N;
    s = new string[N];
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    sort(s, s + N, compare);

    for (int i = 0; i < N; i++)
    {
        if (before_print == s[i])
            continue;
        before_print = s[i];
        std::cout << s[i] << "\n";
    }
    return 0;
}