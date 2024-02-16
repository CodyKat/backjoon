#include <iostream>
#include <deque>

int N;
std::deque<int> dq;

int main()
{
    std::cin >> N;
    for (int i = 1; i < N + 1; i++)
        dq.push_back(i);

    int hand;
    while (dq.size() != 1)
    {
        dq.pop_front();
        hand = dq.front();
        dq.pop_front();
        dq.push_back(hand);
    }
    std::cout << dq.front();
    return 0;
}