#include <set>
#include <iostream>
#include <stdlib.h>

int T;
char guess[5];
char strick, ball;
std::set<std::string> set;

bool in_string(std::string const &str, int index)
{
    char c = guess[index];

    for (int i = 0; i < 3; i++)
    {
        if (str[i] == c)
            return true;
    }
    return false;
}

void check_and_remove()
{
    std::set<std::string>::iterator it;
    int curr_ball;
    int curr_strick;
    char tmp_ball;
    char tmp_strick;
    it = set.begin();
    // std::cout << "in check and remove : size ::  " << set.size() << std::endl;
    while (it != set.end())
    {
        curr_strick = 0;
        curr_ball = 0;
        for (int i = 0; i < 3; i++)
        {
            if (in_string(*it, i))
            {
                if ((*it)[i] == guess[i])
                    curr_strick++;
                else
                    curr_ball++;
            }
        }
        tmp_ball = (char)curr_ball + '0';
        tmp_strick = (char)curr_strick + '0';
        if (tmp_ball != ball || tmp_strick != strick)
        {
            // std::cout << tmp_ball << " " << ball << " " << tmp_strick << " " << strick << std::endl;
            set.erase(*it);
            it = set.begin();
            continue;
        }
        it++;
    }
    // std::cout << "in check and remove : size ::  " << set.size() << std::endl;
}

bool has_zero(int i)
{
    int first;
    int second;
    int third;

    first = (i - (i % 100)) / 100;
    second = (i - first * 100) / 10;
    third = i % 10;
    if (first == 0 || second == 0 || third == 0)
        return true;
    // std::cout << second << " ";
    return false;
}

int main()
{
    for (int i = 123; i <= 987; i++)
    {
        std::string tmp = std::to_string(i);
        if (has_zero(i))
            continue;
        if ((tmp[0] != tmp[1]) && (tmp[0] != tmp[2]) && (tmp[1] != tmp[2]))
            set.insert(tmp);
    }
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        // std::cin >> guess >> strick >> ball;
        scanf("%s %c %c", guess, &strick, &ball);
        check_and_remove();
    }

    // std::set<std::string>::iterator it = set.begin();
    // for (; it != set.end(); it++)
    //     std::cout << *it << std::endl;
    std::cout << set.size();
    return 0;
}