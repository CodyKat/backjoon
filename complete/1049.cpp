#include <iostream>

int N, M;
size_t answer = -1;
int *muggum, *natge;

int main()
{
    int loop_time = 0;
    size_t min_muggum = -1, min_natge = -1;
    std::cin >> N >> M;
    muggum = new int[M];
    natge = new int[M];

    for (int i = 0; i < M; i++)
        std::cin >> muggum[i] >> natge[i];
    for (int i = 0; i < M; i++)
        min_muggum = min_muggum < muggum[i] ? min_muggum : muggum[i];
    for (int i = 0; i < M; i++)
        min_natge = min_natge < natge[i] ? min_natge : natge[i];

    loop_time = N / 6;
    if (N % 6 != 0)
        loop_time++;
    int curr_answer;
    for (int i = 0; i <= loop_time; i++)
    {
        if (i != loop_time)
            curr_answer = min_muggum * i + min_natge * (N - i * 6);
        else
            curr_answer = min_muggum * i;
        answer = answer < curr_answer ? answer : curr_answer;
    }

    std::cout << answer;
    return 0;
}