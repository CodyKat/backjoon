#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> vec;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int tmp;
        std::cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());
    std::vector<int>::iterator it = vec.begin();

    int sum = 0;

    for (; it != vec.end(); it++)
    {
        sum += *it;
    }
    int average = sum / vec.size();
    std::cout << average << "\n";
    std::cout << vec[vec.size() / 2] << "\n";
    return 0;
}