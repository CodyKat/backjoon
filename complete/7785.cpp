#include <iostream>
#include <map>
using namespace std;

string name;
string log;
map<string, bool> table;
int N;
int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> name >> log;
        if (table.find(name) == table.end())
            table.insert(pair<string, bool>(name, true));
        else
        {
            map<string,bool>::iterator it = table.find(name);
            if ((*it).second == false)   
                (*it).second = true;
            else
                (*it).second = false;
        }
    }
    map<string, bool>::reverse_iterator it = table.rbegin();
    
    for (;it != table.rend(); it++)
    {
        if ((*it).second == true)
            cout << (*it).first << '\n';
    }
    return 0;
}