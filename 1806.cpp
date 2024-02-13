#include <iostream>
#include <vector>

using namespace std;

int N, M;
int sum;
vector<int> vec;
int len;

int main()
{
    int left = 0, right = 0;
    std::cin >> N >> M;
    len = N + 1;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }

    sum = vec[0];
    while (left <= right && right < N)
    {
        if (sum < M)
        {
            sum += vec[++right];
        }
        else
        {
            len = len < right - left + 1 ? len : right - left + 1;
            sum -= vec[left++];
        }
    }
    if (len == N + 1)
        cout << "0" << endl;
    else
        cout << len << endl;
    return 0;
}