#include <iostream>
using namespace std;

int main() {
  int x, y, w, h;
  cin >> x >> y >> w >> h;
  size_t len = -1;
  if (len > x)
    len = x;
  if (w - x < len)
    len = w - x;
  if (len > y)
    len = y;
  if (h - y < len)
    len = h - y;
  cout << len << '\n';
  return 0;
}