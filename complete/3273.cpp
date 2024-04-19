#include <algorithm>
#include <iostream>

int main() {
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::ios_base::sync_with_stdio(false);

  int n;
  std::cin >> n;
  int *arr;
  arr = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int sum;
  std::cin >> sum;

  std::sort(arr, arr + n);

  int *p1, *p2;

  p1 = arr;
  p2 = arr + n - 1;
  int count = 0;

  while (p1 < p2) {
    int current_sum = *p1 + *p2;
    if (current_sum == sum) {
      p1++;
      count++;
    } else if (current_sum > sum) {
      p2--;
    } else {
      p1++;
    }
  }
  std::cout << count;
  return 0;
}