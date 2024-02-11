#include <iostream>

char **board;
int N;
int answer;

int check_line_max(bool is_row, int index)
{
    char curr_char = 0;
    int max_seq = 1;
    int curr_seq = 0;

    if (is_row)
    {
        // curr_char = board[index][0];
        for (int i = 0; i < N; i++)
        {
            if (board[index][i] == curr_char)
                curr_seq++;
            else
            {
                curr_char = board[index][i];
                max_seq = max_seq < curr_seq ? curr_seq : max_seq;
                curr_seq = 1;
            }
        }
    }
    else
    {
        // curr_char = board[0][index];
        for (int i = 0; i < N; i++)
        {
            if (board[i][index] == curr_char)
                curr_seq++;
            else
            {
                curr_char = board[i][index];
                max_seq = max_seq < curr_seq ? curr_seq : max_seq;
                curr_seq = 1;
            }
        }
    }
    max_seq = max_seq < curr_seq ? curr_seq : max_seq;
    return max_seq;
}

int check_max()
{
    int line_max = 0;
    int tmp;

    for (int i = 0; i < N; i++)
    {
        tmp = check_line_max(true, i);
        line_max = line_max < tmp ? tmp : line_max;
    }
    for (int i = 0; i < N; i++)
    {
        tmp = check_line_max(false, i);
        line_max = line_max < tmp ? tmp : line_max;
    }
    return line_max;
}

void solve()
{
    char c;
    int tmp_answer;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            c = board[i][j];
            board[i][j] = board[i][j + 1];
            board[i][j + 1] = c;

            tmp_answer = check_max();
            if (answer < tmp_answer)
                answer = tmp_answer;

            c = board[i][j];
            board[i][j] = board[i][j + 1];
            board[i][j + 1] = c;
        }
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            c = board[i][j];
            board[i][j] = board[i + 1][j];
            board[i + 1][j] = c;

            tmp_answer = check_max();
            if (answer < tmp_answer)
                answer = tmp_answer;

            c = board[i][j];
            board[i][j] = board[i + 1][j];
            board[i + 1][j] = c;
        }
    }
}

int main()
{
    scanf("%d", &N);
    board = new char *[N];
    for (int i = 0; i < N; i++)
        board[i] = new char[N];
    for (int i = 0; i < N; i++)
        scanf("%s", board[i]);

    solve();
    std::cout << answer;

    return 0;
}