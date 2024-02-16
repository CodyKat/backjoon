#include <iostream>
#include <set>

int N, S;
int *arr;
int answer;

void search_sum(int depth)
{
    if (depth == N)
    {
        for (int i = 0; i < depth; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
        if (answer == S)
            answer++;
        return;
    }
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
        search_sum(depth + 1);
    }
}

int main()
{
    scanf("%d %d", &N, &S);

    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < N; i++)
        search_sum(i);

    std::cout << answer;
    delete arr;
}