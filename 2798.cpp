#include <iostream>

int answer;
int *arr;
int N, M;

void finish()
{
    std::cout << answer << std::endl;
    exit(0);
}

void search(int i, int j, int k)
{
    if (i >= N)
        finish();
    else if (j >= N)
        search(i + 1, i + 2, i + 3);
    else if (k >= N)
        search(i, j + 1, j + 2);

    int first, second, third, sum;

    first = arr[i];
    second = arr[j];
    third = arr[k];
    sum = first + second + third;

    if (answer < sum && sum <= M)
        answer = sum;
    search(i, j, k + 1);
}

int main()
{
    scanf("%d %d\n", &N, &M);
    arr = new int[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    search(0, 1, 2);
    return 0;
}