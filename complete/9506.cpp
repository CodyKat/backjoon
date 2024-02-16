#include <vector>
#include <iostream>

int N;
std::vector<int> v;

bool is_perfect(int N)
{
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0)
        {
            v.push_back(i);
            sum += i;
        }
    }
    if (N == sum)
        return true;
    return false;
}

int main()
{
    while (true)
    {
        v.clear();
        std::cin >> N;
        if (N == -1)
            return 0;
        if (is_perfect(N))
        {
            std::cout << N << " = ";
            std::vector<int>::iterator it = v.begin();
            for (; it != v.end(); it++)
            {
                std::cout << *it;
                if (it != v.end() - 1)
                    std::cout << " + ";
            }
        }
        else
        {
            std::cout << N << " is NOT perfect.";
        }
        std::cout << "\n";
    }
    return 0;
}