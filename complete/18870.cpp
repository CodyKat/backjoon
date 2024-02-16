#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> vec(N); // 사전에 크기를 지정하여 초기화
    set<int> s;
    map<int, int> m;
    
    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
        s.insert(vec[i]);
    }

    int rank = 0;
    for (int num : s) // set에서 직접 값을 추출
    {
        m[num] = rank++;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << m[vec[i]] << " "; // map에서 직접 접근하여 순위를 출력
    }

    return 0;
}
