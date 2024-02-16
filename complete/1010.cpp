#include <iostream>
int **df;

int search(int N, int M)
{
    int sum = 0;
    int tmp;
    if (N == 1)
        return M;
    for (int i = 0; i < M - N + 1; i++)
    {
        if (df[N - 1][M - 1 - i] != -1)
            sum += df[N - 1][M - 1 - i];
        else
        {
            tmp = search(N - 1, M - i - 1);
            df[N - 1][M - 1 - i] = tmp;
            sum += tmp;
        }
    }
    return sum;
}

int main()
{
    int T, N, M, answer;

    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        scanf("%d %d", &N, &M);
        df = new int *[N];
        for (int i = 0; i < N; i++)
            df[i] = new int[M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                df[i][j] = -1;
            }
        }
        answer = search(N, M);
        std::cout << answer << std::endl;
        for (int i = 0; i < N; i++)
            delete[] df[i];
        delete[] df;
    }
    return 0;
}