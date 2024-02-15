#include <iostream>

int T;
int to_pay;
int A, B, C, D;

int main()
{
    std::cin >> T;

    for (int i = 0 ;i < T; i++)
    {
        std::cin >> to_pay;
        A = 0;
        B = 0;
        C = 0;
        D = 0;
        while (to_pay / 25)
        {
            to_pay -= 25;
            A++;
        }
        while (to_pay / 10)
        {
            to_pay -= 10;
            B++;
        }
        while (to_pay / 5)
        {
            to_pay -= 5;
            C++;
        }
        D = to_pay;
        std::cout << A << " " << B << " " << C << " " << D << "\n";
    }
}