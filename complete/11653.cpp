#include <iostream>
#include <cmath>
int N;

int main()
{
    std::cin >> N;
    for (int i = 2; i <= sqrt(N); i++)
    {
        while (N % i == 0)
        {
            std::cout << i << "\n";
            N /= i;
        }
    }
    if (N > 1) // 마지막 소인수 출력
        std::cout << N << "\n";
    return 0;
}
