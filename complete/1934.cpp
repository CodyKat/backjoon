#include <iostream>
#include <set>

using namespace std;

multiset<int> As, Bs;

int T, A, B;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);    
    ios_base::sync_with_stdio(false);
    cin >> T;
    for (int i = 0 ; i < T; i++)
    {
        cin >> A >> B;
        int common = gcd(A, B);
        int answer = common;
        answer *= A / common;
        answer *= B / common;
        cout << answer << '\n';
    }

    return 0;
}