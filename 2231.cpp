#include <iostream>
int target;
int num;
int tmp;
int main()
{
    std::cin >> target;
    for (int i = 1; i < target; i++)
    {
        tmp = i;
        num = i;
        while (tmp > 0)
        {
            num += tmp % 10;
            tmp /= 10;
        }
        if (num == target)
        {
            std::cout << i << "\n";
            return 0;
        }
    }
    std::cout << "0\n";
    return 0;
}