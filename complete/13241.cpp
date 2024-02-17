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

    cin >> A >> B;
    long long int common = gcd(A, B);
    long long int answer = common;
    answer *= A / common;
    answer *= B / common;
    cout << answer << '\n';

    return 0;
}