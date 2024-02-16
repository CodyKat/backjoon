#include <iostream>
#include <set>

int N;
std::set<int> set;

int main()
{
    std::cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        set.insert(num);
    }

    std::set<int>::iterator it = set.begin();

    for (; it != set.end(); it++)
    {
        std::cout << *it << "\n";
    }

    return 0;
}