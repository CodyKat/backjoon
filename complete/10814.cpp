#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int, string> > v;


bool compare(const pair<int,string> &a, const pair<int,string> &b)
{
    return a.first < b.first;
}

int main()
{
    pair<int, string> a;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a.first >> a.second;
        v.push_back(a);
    }
    stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << "\n";
    return 0;
}