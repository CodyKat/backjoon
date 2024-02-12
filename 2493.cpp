// #include <iostream>

// int *arr;
// int N;

// int main()
// {
//     std::cin >> N;
//     bool flag = false;
//     arr = new int[N];
//     for (int i = 0; i < N; i++)
//     {
//         std::cin >> arr[i];
//     }

//     for (int i = 0; i < N; i++)
//     {
//         flag = false;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[i] < arr[j])
//             {
//                 std::cout << j + 1 << " ";
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag == false)
//             std::cout << "0 ";
//     }
// }

#include <iostream>
#include <vector>

int N;
int max;
std::vector<int> vec;

int main()
{
    int n;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> n;
        if (max < n)
            max = n;
        vec.push_back(n);
    }

    for (int i = max; i > 0; i--)
    {
    }
}