#include <iostream>
using namespace std;

int arr[10000];
int N;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        arr[num - 1]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        while (arr[i])
        {
            cout << i + 1 << "\n";
            arr[i]--;
        }
    }
    return 0;
}