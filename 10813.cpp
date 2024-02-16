#include <iostream>
#include <vector>

std::vector<int> vec;
int N, M;
int target1, target2;

int main()
{
    std::cin >> N >> M;
    for (int i = 0; i < N; i++)
        vec.push_back(i + 1);

    for (int i = 0; i < M; i++)
    {
        std::cin >> target1 >> target2;
        int tmp = vec[target1 - 1];
        vec[target1 - 1] = vec[target2 - 1];
        vec[target2 - 1] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << vec[i];
        if (i != N - 1)
            std::cout << " ";
    }
    std::cout << "\n";
    return 0;
}