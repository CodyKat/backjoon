#include <iostream>
#include <list>

using namespace std;

list<int> lst;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, count;

    list<int>::iterator it = lst.begin();

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        lst.push_back(i + 1);
    }
    for (int i = 0; i < N; i++)
    {
        if (i == 0) // ㅁㅐㄴ ㅊㅓㅇㅁ일때
        {
            int paper = *it;
            it = lst.erase(it);
            for (int j = 0; j < paper * -1; j++)
            {
                if (paper > 0)
                {
                    it++;
                    if (it == lst.end())
                        it = lst.begin();
                }
                else
                {
                    if (it == lst.begin())
                        it = lst.end() - 1;
                    it--;
                }
            }
        }
        else
        {
            cin >> count;
            if (count > 0)
            {
            }
            else
            {
            }
        }
    }

    return 0;
}