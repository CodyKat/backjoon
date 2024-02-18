#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;
typedef unsigned long long ull;
ull answer;

map<int, vector<int>>::iterator *its;

map<int, vector<int>> m;
map<int, int> it_index;
int N, C;
bool flag;

bool is_end(map<int, vector<int>>::iterator *its)
{
    int size = it_index.size();
    int len = 0;
    vector<int>::iterator it;
    vector<int> tmp_v;
    for (int i = 0; i < size; i++)
    {
        tmp_v = its[i]->second;
        if (tmp_v.size() != it_index[i])
            return false;
    }
    return true;
}

ull nCr(ull n, ull r)
{
    if (n == r || r == 0)
        return 1;
    else
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

void solve(map<int, vector<int>>::iterator *its)
{
    if (is_end(its))
        return;
    int sum = 0;
    int realsum = 0;
    int size = it_index.size();
    flag = false;

    for (int i = 0; i < size; i++)
    {
        sum += its[i]->second[it_index[i]]; // nCr multiple
        realsum += sum * nCr(its[i]->second.size() - 1, it_index[i] - 1);
    }
    if (sum <= C)
    {
        answer += realsum;
    }
    // it_index.back()++;
    vector<int>::iterator it = it_index.begin();
    for (int i = 0; i < m.size() - 1; i++)
    {
        map<int, vector<int>>::iterator it2 = its[i];
        (*it)++;
        if (flag)
        {
            if (*it == it2->second.size())
            {
                *it = 0;
                if ((it + 1) != it_index.end())
                    *(it + 1)++;
            }
            else
                break;
        }
        else
        {
            if (*it == it2->second.size())
            {
                flag = true;
                *it = 0;
                if ((it + 1) != it_index.end())
                    *(it + 1)++;
            }
        }
        it++;
    }
    solve(its);
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        map<int, vector<int>>::iterator it = m.find(tmp);
        if (it == m.end())
        {
            vector<int> v;
            v.push_back(0);
            v.push_back(tmp);
            m.insert(pair<int, vector<int>>(tmp, v));
            it_index.insert(pair<int, int>(tmp, 1));
            // it_index.push_back(1);
            // it_len.push_back(1);
        }
        else
        {
            it->second.push_back(it->second[1] * it->second.size());
            // it_len[it->second]
        }
    }
    its = new map<int, vector<int>>::iterator[m.size()];
    map<int, vector<int>>::iterator it = m.begin();
    for (int i = 0; i < m.size(); i++)
    {
        its[i] = it;
        it++;
    }
    solve(its);
    cout << answer << '\n';
}