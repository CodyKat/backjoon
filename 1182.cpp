#include <iostream>
#include <set>

int N, S;
int *arr;
int answer;

void print_board(int *board, int size)
{
    for (int i = 0; i < size; i++)
        std::cout << board[i] << " ";
    std::cout << std::endl;
}

//
int search_sum(int *board, int size)
{
}

int main()
{
    scanf("%d %d", &N, &S);

    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }

    search_sum(arr, N);

    std::cout << answer;
    delete arr;
}