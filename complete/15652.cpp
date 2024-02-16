#include <iostream>

int N, M;
int arr[100];

void loop(int n, int m)
{
    if (m == M)
    {
        for (int i = 0; i < M; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
        return ;
    }
    for (int i = n; i <= N; i++)
    {
        arr[m] = i;
        loop(i, m + 1);
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    loop(1, 0);
}