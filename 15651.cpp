#include <iostream>

int N, M;
char arr[10];


void print(int i)
{
    if (i == M)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << arr[j] << " ";
        }
        std::cout << '\n';
        return ;
    }
    for (int j = 0; j < N; j++)
    {
        arr[i] = '0' + j + 1;
        print(i + 1);
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    print(0);
}