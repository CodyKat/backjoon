#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int T, N;
    bool find = false;

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        for (int j = 1;; j++)
        {
            if (N <= 1)
                N = 2;
            int len = sqrt(N);
            find = true;
            for (int k = 2; k <= len; k++)
            {
                if (N % k == 0)
                {
                    find = false;
                    break;
                }
            }
            if (find)
                break ;
            N++;
        }
        cout << N << '\n';
    }
}