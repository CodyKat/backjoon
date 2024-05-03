#include <algorithm>
#include <iostream>
#include <vector>

int
main()
{
  int N, num;
  std::vector<int> vector;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> num;
    vector.push_back(num);
  }
  std::sort(vector.begin(), vector.end());
  std::cout << *vector.begin() * *vector.rbegin();
  return 0;
}