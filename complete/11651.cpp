#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second < b.second)
        return true;
    else if (a.second == b.second)
        return a.first < b.first;
    return false;
}

vector<pair<int, int>> vec;
int N;
int main()
{
    int a, b;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        vec.push_back(pair<int, int>(a, b));
    }
    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < N; i++)
        cout << vec[i].first << " " << vec[i].second << "\n";
}