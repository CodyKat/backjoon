#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, M;
map<int, int> m;
vector<int> v;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        map<int, int>::iterator it = m.find(tmp);
        if (it == m.end())
            m.insert(pair<int, int>(tmp, 1));
        else
            it->second++;
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int tmp;
        cin >> tmp;
        map<int, int>::const_iterator it = m.find(tmp);
        if (it == m.end())
            cout << "0 ";
        else
            cout << it->second << ' ';
    }
    cout << '\n';
}