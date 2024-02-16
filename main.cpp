#include <iostream>
#include <map>

using namespace std;

multimap<int, string> m;

bool compare(const multimap<int, string> &s1, const multimap<int, string> &s2)
{
    if ((*s1.begin()).second < (*s2.rbegin()).second)
        return true;
    return false;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        m.insert(pair<int, string>(age, name));
    }

    multimap<int, string>::iterator it = m.begin();

    sort(m.begin(), m.end(), compare);

    for (; it != m.end(); it++)
    {
        std::cout << (*it).first << " " << (*it).second << "\n";
    }
    return 0;
}