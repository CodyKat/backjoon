#include <iostream>
#include <vector>
#include <cmath>
std::vector<int> v;
int N , M;

bool is_prime(int N)
{
    if (N == 1)
        return false;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

int main()
{
    std::cin >> N >> M;
    for (size_t i = N; i < M + 1; i++)
        v.push_back(i);
    std::vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        if (is_prime(*it) == false)
            it = v.erase(it);
        else
            it++;
    } 
    int sum = 0;
    it = v.begin();
    for (; it != v.end(); it++)
    {
        sum += *it;
    }
    if (v.empty())
        std::cout << "-1\n";
    else
    {
        std::cout << sum << "\n";
        std::cout << v.front() << "\n";
    }
}