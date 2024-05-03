#include <iostream>
#include <set>

int
main()
{
  std::set<std::string> danceSet;
  int N;
  std::string name1, name2;

  danceSet.insert("ChongChong");
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    std::cin >> name1 >> name2;
    if (danceSet.find(name1) != danceSet.end() ||
        danceSet.find(name2) != danceSet.end()) {
      danceSet.insert(name1);
      danceSet.insert(name2);
    }
  }
  std::cout << danceSet.size();
  return 0;
}