#include <iostream>
#include <set>
#include <vector>

std::vector<int> vec;
std::set<int> set;

int main()
{
    int tmp;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> tmp;
        vec.push_back(tmp % 42);
    }
    for (int i = 0; i < 10; i++)
    {
        set.insert(vec[i]);
    }
    std::cout << set.size() << "\n";
    return 0;
}