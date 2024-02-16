#include <iostream>
#include <vector>

std::vector<int> vec;
int N, M;
int start, end;

int main()
{
    std::cin >> N >> M;
    for (int i = 0; i < N; i++)
        vec.push_back(i + 1);

    for (int i = 0; i < M; i++)
    {
        std::cin >> start >> end;
        int len = end - start + 1;
        for (int j = start; j < (start + end + 1) / 2; j++)
        {
            int tmp = vec[j - 1];
            vec[j - 1] = vec[start * 2 + len - j - 2];
            vec[start * 2 + len - j - 2] = tmp;
        }
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