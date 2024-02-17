#include <iostream>
#include <set>

using namespace std;

set<string> s;
int N, M;
int answer;
int main()
{
    cin >> N >> M;
    for (int i = 0 ; i < N; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    
    for (int i = 0; i < M; i++)
    {
        string str;
        cin >> str;
        if (s.find(str) != s.end())
            answer++;
    }
    cout << answer << "\n";
    return 0;
}