#include <iostream>

int
main()
{
  int N;
  size_t result;
  std::cin >> N;

  result = 1;
  for (int i = 0; i < N; i++) {
    result *= 2;
  }
  std::cout << result;
  return 0;
}