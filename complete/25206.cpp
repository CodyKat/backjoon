#include <iostream>

std::string subject;
double hackjum;
std::string grade;
double sum;
double hackjum_sum;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        std::cin >> subject >> hackjum >> grade;
        if (grade == "A+")
            sum += hackjum * 4.5;
        else if (grade == "A0")
            sum += hackjum * 4.0;
        else if (grade == "B+")
            sum += hackjum * 3.5;
        else if (grade == "B0")
            sum += hackjum * 3.0;
        else if (grade == "C+")
            sum += hackjum * 2.5;
        else if (grade == "C0")
            sum += hackjum * 2.0;
        else if (grade == "D+")
            sum += hackjum * 1.5;
        else if (grade == "D0")
            sum += hackjum * 1.0;
        if (grade != "P")
            hackjum_sum += hackjum;
    }
    std::cout << sum / (double)hackjum_sum << "\n";
    return 0;
}