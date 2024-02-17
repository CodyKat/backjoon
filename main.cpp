#include <iostream>
// 1735

using namespace std;
int A1, B1, A2, B2;

int gcd(int a, int b)
{
    if (a > b)
    {
        if (a % b == 0)
            return b;
        return gcd(b, a % b);
    }
    else
    {
        if (b % a == 0)
            return a;
        return gcd(a, b % a);
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);    
    ios_base::sync_with_stdio(false);

    cin >> A1 >> A2;
    cin >> B1 >> B2;
    int tmp1 = A1;
    int tmp2 = A2;
    A1 *= B2;
    A2 *= B2;
    B1 *= tmp1;
    B2 *= tmp2;
    int bunmo = B2;
    int bunza = A1 + B1;


    int common2 = gcd(bunza, bunmo);
    bunza /= common2;
    bunmo /= common2;

    cout << bunza << ' ' << bunmo << '\n';

    return 0;
}