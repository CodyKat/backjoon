#include <iostream>

int answer;
int *arr;
int length, N;
void pr()
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == length)
            arr[i] = 1;
        else
            arr[i]++;
    }
    answer++;
}

void pl()
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 1)
            arr[i] = length;
        else
            arr[i]--;
    }
    answer++;
}

void pop()
{
    for (int i = 0; i < N - 1; i++)
    {
        arr[i] = arr[i + 1] - 1;
    }
    length--;
}

int max(int *arr)
{
    int max_value = arr[0];
    for (int i = 1; i < N; i++)
        max_value = max_value < arr[i] ? arr[i] : max_value;
    return max_value;
}

int main()
{
    std::cin >> length >> N;
    int move_count;
    arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        int target = arr[0];
        int left_dist = arr[0] - 1;
        int right_dist = length - arr[0]; // - max(arr) - 1;
        move_count = left_dist < right_dist ? left_dist : right_dist;
        if (left_dist <= right_dist)
        {
            for (int i = 0; i < move_count; i++)
                pl();
        }
        else
        {
            for (int i = 0; i < move_count + 1; i++)
                pr();
        }
        pop();
    }
    std::cout << answer;
}