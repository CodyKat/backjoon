#include <iostream>

using namespace std;

int main() {
  int arr[6];
  arr[0] = 1;
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 2;
  arr[4] = 2;
  arr[5] = 8;

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  cout << arr[0] - a << ' ' << arr[1] - b << ' ' << arr[2] - c << ' '
       << arr[3] - d << ' ' << arr[4] - e << ' ' << arr[5] - f << '\n';
  return 0;
}
