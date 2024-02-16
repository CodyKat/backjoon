#include <iostream>

int N, M;

char arr[55];

bool is_not_assending()
{
    for (int i = 0; i < M - 1; i++)
    {
        for (int j = i + 1; j < M; j++)
        {
            if (arr[i] >= arr[j])
                return true;
        }
    }
    return false;
}

void multiple_loop(int depth)
{
    if (depth == M)
    {
        if (!is_not_assending())
        {
            for (int i = 0; i < M; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }
        return;
    }

    for (int i = 1; i <= N; ++i)
    {
        arr[depth] = '0' + i;
        multiple_loop(depth + 1);
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    multiple_loop(0);
    return 0;
}#include <iostream>

int N, M;

char arr[55];

bool is_not_assending()
{
    for (int i = 0; i < M - 1; i++)
    {
        for (int j = i + 1; j < M; j++)
        {
            if (arr[i] >= arr[j])
                return true;
        }
    }
    return false;
}

void multiple_loop(int depth)
{
    if (depth == M)
    {
        if (!is_not_assending())
        {
            for (int i = 0; i < M; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }
        return;
    }

    for (int i = 1; i <= N; ++i)
    {
        arr[depth] = '0' + i;
        multiple_loop(depth + 1);
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    multiple_loop(0);
    return 0;
}