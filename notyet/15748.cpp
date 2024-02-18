#include <iostream>
#include <map>
using namespace std;

map<int, int> m;
unsigned long long L, N, rf, rb, answer;
unsigned long long time_f, time_b;

map<int, int>::iterator find_max(map<int, int>::iterator &it)
{
    int max = -1;
    map<int, int>::iterator max_it = it;
    for (; it != m.end(); it++)
    {
        if ((*it).second >= max)
        {
            max_it = it;
            max = (*it).second;
        }
    }
    return max_it;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    unsigned long long diff = 0LL;

    cin >> L >> N >> rf >> rb;
    for (int i = 0; i < N; i++)
    {
        int x, c;
        cin >> x >> c;
        m.insert(pair<int, int>(x, c));
    }
    map<int, int>::iterator max_it = m.begin();
    max_it = find_max(max_it);
    for (int i = 1; i <= L; i++)
    {
        if (max_it->first == i)
        {
            long long diff = time_f - time_b;
            answer += diff * max_it->second;
            cout << "diff : " << diff << '\n';
            cout << "max_it->second : " << max_it->second << '\n';
            cout << "answer : " << answer << '\n';
            max_it++;
            if (max_it == m.end())
                break;
            max_it = find_max(max_it);
            time_b = 0;
            time_f = 0;
            // diff = 0;
        }
        // diff += time_f - time_b;
        time_f += rf;
        time_b += rb;
    }
    cout << answer << '\n';

    return 0;
}

// #include <iostream>
// #include <queue>
// using namespace std;
// typedef long long ll;
// typedef pair<ll, ll> pii;

// ll L, N;
// ll Rf, Rb;
// struct cmp
// {
//     bool operator()(pii a, pii b)
//     {
//         // 가치가 같다면 높은 곳부터
//         if (a.second == b.second)
//             return a.first < b.first;
//         // 가치 큰 곳부터
//         return a.second < b.second;
//     }
// };
// priority_queue<pii, vector<pii>, cmp> pq;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cout.tie(NULL);
//     cin.tie(NULL);

//     cin >> L >> N >> Rf >> Rb;

//     for (int i = 0; i < N; ++i)
//     {
//         ll x, c;
//         cin >> x >> c;
//         pq.push(pii(x, c));
//     }

//     ll now = 0LL; // 현재 등산 위치
//     ll ans = 0LL; // 구하고자하는 답
//     while (!pq.empty())
//     {
//         ll where = pq.top().first;
//         ll value = pq.top().second;
//         pq.pop();
//         if (now >= where)
//             continue;

//         ans += (where - now) * (Rf - Rb) * value;
//         now = where;
//     }
//     cout << ans << '\n';

//     return 0;
// }