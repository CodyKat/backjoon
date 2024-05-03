#include <algorithm>
#include <iostream>
#include <set>

int
main()
{
  std::set<std::string> nameSet;
  std::string input;
  int N, count;
  // bool enterFlag = false;

  count = 0;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> input;
    if (input.compare("ENTER") == 0)
      // enterFlag = true;
      nameSet.clear();
    else {
      if (nameSet.find(input) == nameSet.end()) {
        nameSet.insert(input);
        count++;
      }
    }
  }
  std::cout << count;
  return 0;
}