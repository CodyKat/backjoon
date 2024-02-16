#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<char> vec;
string str;

bool compare(char i, char j)
{
    return i > j;
}

int main()
{
    char tmp;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        tmp = str[i];
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i];
    cout << "\n";
    return 0;
}