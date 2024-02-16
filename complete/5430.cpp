#include <iostream>
#include <deque>
#include <cstring>
#include <string>
using namespace std;
int T;
int N;
int func_len;
char curr_func;
int tmp;
char discard_char;
bool error_flag;
bool reverse_flag;

string func;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        deque<int> dq;
        error_flag = false;
        reverse_flag = false;
        cin >> func;
        // cout << "func : " << func << endl;
        cin >> N;
        // cout << "N : " << N << endl;

        cin >> discard_char; // {
        for (int index = 0; index < N; ++index)
        {
            cin >> tmp;
            cin >> discard_char;
            dq.push_back(tmp);
        }
        if (!N)
            cin >> discard_char;
        // cout << "discard_char : " << discard_char << endl;
        // }
        func_len = func.size();
        for (int j = 0; j < func_len; j++)
        {
            curr_func = func[j];
            if (curr_func == 'R')
            {
                if (reverse_flag == false)
                    reverse_flag = true;
                else
                    reverse_flag = false;
            }
            else // D
            {
                if (dq.size() == 0)
                {
                    cout << "error\n";
                    error_flag = true;
                    break;
                }
                if (reverse_flag == false)
                    dq.pop_front();
                else
                    dq.pop_back();
            }
        }
        if (error_flag == false)
        {
            int size = dq.size();
            cout << "[";
            for (int j = 0; j < size; j++)
            {
                if (reverse_flag == false)
                    cout << dq[j];
                else
                    cout << dq[size - j - 1];
                if (j != size - 1)
                    cout << ",";
            }
            cout << "]\n";
        }
        dq.clear();
    }

    return 0;
}
