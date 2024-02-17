#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> s1;

int N, M;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0 ; i < N ; i++)
    {
        int tmp;
        cin >> tmp;
        s1.push_back(tmp);
    }
    sort(s1.begin(), s1.end());
    cin >> M;
    for (int i = 0 ; i < M ; i++)
    {
        int tmp;
        cin >> tmp;
        
        if (binary_search(s1.begin(), s1.end(), tmp))
            std::cout << "1 ";
        else
            std::cout << "0 ";

    }
    std::cout << "\n";

}