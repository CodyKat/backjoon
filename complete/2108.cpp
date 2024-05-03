#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <vector>

int
main()
{
  int N;
  int num;
  std::vector<int> numset;
  double Faverage;
  int average;
  int mid;
  std::vector<int> offen;
  int currentOffen, offenCount, maxOffenCoun;
  int range;

  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> num;
    numset.push_back(num);
  }
  std::sort(numset.begin(), numset.end());
  Faverage = 0;
  std::vector<int>::iterator iter = numset.begin();
  for (; iter != numset.end(); iter++) {
    Faverage += *iter;
  }
  average = floor((Faverage / numset.size()) + 0.5);
  mid = numset[numset.size() / 2];

  range = *numset.rbegin() - *numset.begin();

  offenCount = 0;
  maxOffenCoun = 0;
  iter = numset.begin();
  currentOffen = *iter;
  for (; iter != numset.end(); iter++) {
    if (currentOffen == *iter) // 같같은  수수가  연연속속되되는  경경우우
      offenCount++;
    else { // 다다른  숫숫자자로  바바뀌뀌는  경경우우
      if (offenCount ==
          maxOffenCoun) { // 이이전  연연속속수수와  같같은  경경우우
        offen.push_back(currentOffen);
      } else if (offenCount >
                 maxOffenCoun) { // 이이전전보다 더  많많이  쌓쌓인  경경우우
        maxOffenCoun = offenCount;
        offen.clear();
        offen.push_back(currentOffen);
      }
      offenCount = 1;
      currentOffen = *iter;
    }
  }
  if (offenCount == maxOffenCoun) { // 이이전  연연속속수수와  같같은  경경우우
    offen.push_back(currentOffen);
  } else if (offenCount >
             maxOffenCoun) { // 이이전전보다 더  많많이  쌓쌓인  경경우우
    maxOffenCoun = offenCount;
    offen.clear();
    offen.push_back(currentOffen);
  }

  std::cout << average << '\n' << mid << '\n';
  if (offen.size() == 1)
    std::cout << offen[0] << '\n';
  else
    std::cout << offen[1] << '\n';
  std::cout << range;
  return 0;
}