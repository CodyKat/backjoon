#include <iostream>
#include <algorithm>

int C;
int arr[10];
int answer[10];
int N;

bool is_dup()
{
    for (int i = 0; i < C - 1; i++)
    {
        for (int j = i + 1; j < C; j++)
        {
            if (answer[i] == answer[j])
                return true;
        }
    }
    return false;
}

void main_loop(int depth)
{
    if (depth == C)
    {
        if (!is_dup())
        {
            for (int i = 0; i < C; i++)
            {
                std::cout << answer[i] << " ";
            }
            std::cout << "\n";
        }
        return ;
    }
    for (int i = 0; i < N; i++)
    {
        answer[depth] = arr[i];
        main_loop(depth + 1);
    }
}

int main()
{
    scanf("%d %d", &N, &C);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    std::sort(arr, arr + N);
    main_loop(0);

    return 0;
}