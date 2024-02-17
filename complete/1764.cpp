#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<string> s1 ,s2;
vector<string> v;

int sum;
int N, M;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> M;
    for (int i = 0; i < N ; i++)
    {
        string tmp;
        cin >> tmp;
        s1.insert(tmp);
    }
    for (int i = 0; i < M; i++)
    {
        string tmp;
        cin >> tmp;
        s2.insert(tmp);
    }

    set<string>::const_iterator it = s1.begin();
    for (; it != s1.end(); it++)
    {
        set<string>::const_iterator it1 = s2.find(*it);
        if (it1 != s2.end())
        {  
            sum++;
            v.push_back(*it1);
        }
    }
    cout << sum << '\n';
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << '\n';
    }

    return 0;
}