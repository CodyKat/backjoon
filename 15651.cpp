#include <iostream>

int N, M;

// void print_req(int N)
// {
//     for (int i = 0; i < M; i++)
//     {

//     }
// }

// int main()
// {
//     scanf("%d %d", &N, &M);
//     print_req(N);
// }

void foward(char *str)
{
    if (*str == '\0')
        return;
    printf("%c", *str);
    foward(str + 1);
}
void reverse(char *str)
{
    if (*str == '\0')
        return;
    reverse(str + 1);
    printf("%c", *str);
}

char arr[55];
int n = 5;
void multiple_loop(int depth)
{
    if (depth == n - 1)
    {
        printf("%s ", arr);
        return;
    }

    for (int i = 0; i < 10; ++i)
    {
        arr[depth] = '0' + i;
        multiple_loop(depth + 1);
    }
}

int main()
{
    char *str = "Hello World";
    foward(str);
    std::cout << std::endl;
    reverse(str);
    std::cout << std::endl;

    multiple_loop(0);

    // for (int a = 0; a < 10; ++a)
    //     for (int b = a; b < 10; ++b)
    //         for (int c = b; c < 10; ++c)
    //             for (int d = c; d < 10; ++d)
    //                 for (int e = d; e < 10; ++e)
    //                     printf("%d%d%d%d%d%c", a, b, c, d, e, e == 9 ? '\n' : ' ');
}