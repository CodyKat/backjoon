#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      cout << ' ';
    }
    for (int k = 0; k < i * 2 + 1; k++)
      cout << '*';
    cout << '\n';
  }
  for (int i = N - 1; i > 0; i--) {
    for (int j = N - i; j > 0; j--) {
      cout << ' ';
    }
    for (int k = i * 2 - 1; k > 0; k--)
      cout << '*';
    cout << '\n';
  }
  return 0;
}