#include <iostream>

int N, M;
int *arr;

int main()
{
    std::cin >> N >> M;
    arr = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];
    std::sort(arr, arr + N);

        return 0;
}