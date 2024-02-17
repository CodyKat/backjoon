#include <iostream>
#include <vector>
using namespace std;


int main()
{

    int arr['z'- 'a' + 1];
    for (int i = 0; i < 'z' - 'a' + 1; i++)
        arr[i] = 0;


    string str;

    cin >> str;

    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
            arr[str[i] - 'A']++;
        else
            arr[str[i] - 'a']++;
    }

    int max = -1;
    vector<int> maxIndex;
    maxIndex.push_back(-1);
    for (int i = 0; i < 'z' - 'a' + 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex.clear();
            maxIndex.push_back(i);
        }
        else if (max == arr[i])
        {
            maxIndex.push_back(i);
        }
    }
    
    
    if (maxIndex.size() > 1)
        cout << '?' << '\n';
    else
        cout << (char)('A' + maxIndex[0]) << '\n';

    return 0;
}