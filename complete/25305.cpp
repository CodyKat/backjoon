#include <iostream>
#include <vector>
#include <algorithm>
int N, M;
std::vector<int> vec;

int main()
{
    std::cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        std::cin >> tmp;
        vec.push_back(tmp);
    }

    std::sort(vec.begin(), vec.end());
    std::cout << vec[vec.size() - M] << "\n";
    return 0;
}
