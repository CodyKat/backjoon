#include <iostream>
#include <set>

using namespace std;

set<int> s1, s2;
int N, M;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> M;
    for (int i = 0; i < N ; i ++)
    {
        int tmp;
        cin >> tmp;
        s1.insert(tmp);
    }
    for (int i = 0; i < M ; i ++)
    {
        int tmp;
        cin >> tmp;
        s2.insert(tmp);
    }
    set<int>::iterator it1 = s1.begin();
    while (it1 != s1.end())
    {
        set<int>::iterator it2 = s2.find(*it1);
        if (it2 != s2.end())
        {
            it1 = s1.erase(it1);
            s2.erase(*it2);
            continue;
        }
        else
            it1++;
    }
    cout << s1.size() + s2.size() << '\n';
    return 0;
}