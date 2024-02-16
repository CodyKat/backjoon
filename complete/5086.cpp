#include <iostream>

int N, M;

int main()
{
    while (true)
    {
        std::cin >> N >> M;
        if ( N == 0 && M == 0)
            return 0;
        if (N <= M)
        {
            if (M % N == 0)
                std::cout << "factor\n";
        }
        else
        {
            if (N % M == 0)
                std::cout << "multiple\n";
        }
        if (N % M != 0 && M % N != 0)
            std::cout << "neither\n";
    }
}