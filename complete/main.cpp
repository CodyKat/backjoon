#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Person
{
    int age;
    string name;
};
vector<Person> v;


bool compare(const Person &A, const Person &B)
{
    if (A.age < B.age)
        return true;
    else if (A.age == B.age)
        return  A.name > B.name;
    return false;
}

int main()
{
    int age;
    string name;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        Person P;
        P.age = age;
        P.name = name;
        v.push_back(P);
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++)
        cout << v[i].age << " " << v[i].name << "\n";
    return 0;
}