#include <iostream>
#include <deque>
#include <sstream>

using namespace std;
char c;
int N, M;
string line;
deque<int> A, B;
int number;

int main()
{
    cin >> N;
    getline(cin, line);
    getline(cin, line);
    istringstream Astream(line);
    while (Astream >> number)
    {
        A.push_back(number);
    }

    cin >> M;
    getline(cin, line);
    getline(cin, line);
    istringstream Bstream(line);
    while (Bstream >> number)
    {
        B.push_back(number);
    }

    deque<int>::iterator it;
    for (int i = 0; i < M; i++)
    {
        number = B.front();
        B.pop_front();
        it = find(A.begin(), A.end(), number);
        if (it == A.end())
            std::cout << "0\n";
        else
            std::cout << "1\n";
    }

    return 0;
}