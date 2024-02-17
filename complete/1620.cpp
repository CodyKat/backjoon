#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, M;
map<string, int> m;
vector<string> v;

string name;

int main()
{
    
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> M;
    v.reserve(N);
    for (int i = 0 ; i < N; i++)
    {
        cin >> name;
        m.insert(pair<string, int>(name, i + 1));
        v.push_back(name);
    }
    for (int i = 0; i < M ; i++)
    {
        cin >> name;
        if ('0' <= name[0] && name[0] <= '9')
        {
            cout << v[atoi(name.c_str()) - 1] << '\n';
        }
        else
        {
            map<string, int>::const_iterator it;
            it = m.find(name);
            cout << it->second << '\n';
        }
    }
    return 0;
}