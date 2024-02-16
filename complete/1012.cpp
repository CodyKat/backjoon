#include <iostream>

int M, N, n;
int **board;
int **trace_board;
int answer;

void color_board(int row, int col)
{
    if (col < 0 || col >= M || row < 0 || row >= N)
        return;
    if (board[row][col] == 0)
        return;
    if (board[row][col] == 1)
    {
        if (trace_board[row][col] == 1)
            return;
        trace_board[row][col] = 1;
    }
    color_board(row + 1, col);
    color_board(row - 1, col);
    color_board(row, col + 1);
    color_board(row, col - 1);
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        answer = 0;
        scanf("%d %d %d", &M, &N, &n);
        board = new int *[N];
        for (int i = 0; i < N; i++)
        {
            board[i] = new int[M];
            for (int j = 0; j < M; j++)
                board[i][j] = 0;
        }
        trace_board = new int *[N];
        for (int i = 0; i < N; i++)
        {
            trace_board[i] = new int[M];
            for (int j = 0; j < M; j++)
                trace_board[i][j] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            board[y][x] = 1;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (trace_board[i][j] == 1)
                    continue;
                if (board[i][j] == 1)
                {
                    color_board(i, j);
                    answer++;
                }
            }
        }
        std::cout << answer << std::endl;
    }
    return 0;
}