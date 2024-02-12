#include <iostream>

int lengh;
int to_pop_count;

int find_to_pop_block_index(int *arr)
{
}

int main()
{
    std::cin >> lengh >> to_pop_count;
    int *arr = new int[lengh];
    for (int i = 0; i < to_pop_count; i++)
        std::cin >> arr[i];

    int to_pop_block_index;

    for (int i = 0; i < to_pop_count; i++)
    {
        to_pop_block_index = find_to_pop_block_index(arr);
    }
}