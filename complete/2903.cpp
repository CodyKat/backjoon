#include <iostream>
#include <cmath>

int N;
int len;
int main()
{
    len = 2;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        len *= 2;
        len -= 1;
    }
    size_t answer = pow(len, 2);
    std::cout << answer << "\n";
    return 0;
}