#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <set>
using namespace std;

int answer_1, answer_2;
int target, N, tmp;
set<int> s;
int main() {
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  for (int i = 0; i <= 9; i++) {
    s.insert(i);
  }

  cin >> target;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    s.erase(tmp);
  }
  int time = 0;
  char buffer[500000];
  string str;

  int current_answer;
  set<int>::iterator it;
  int direct_answer = abs(target - 100);
  int tmp_target, tmp2_target;
  if (s.size() == 1 && (*s.begin()) == 0) {
    answer_1 = 2147483647;
    goto A;
  }

  tmp_target = target;
  str = to_string(target);
  flag = false;
  for (int i = 0; i < str.length(); i++) {
    it = find(s.begin(), s.end(), str[i] - '0');
    if (it == s.end()) {
      tmp_target++;
      str = to_string(tmp_target);
      if (i == str.length() - 1)
        break;
      else
        i = -1;
    }
  }
  answer_1 = abs(target - tmp_target) + str.length();

A:
  tmp2_target = target;
  str = to_string(target);
  for (int i = 0; i < str.length(); i++) {
    it = find(s.begin(), s.end(), str[i] - '0');
    if (it == s.end()) {
      tmp2_target--;
      str = to_string(tmp2_target);
      if (i == str.length() - 1)
        break;
      else
        i = -1;
    }
  }
  answer_2 = abs(target - tmp2_target) + str.length();
  int answer;
  if (answer_1 < answer_2)
    answer = answer_1;
  else
    answer = answer_2;
  if (answer > direct_answer)
    answer = direct_answer;
  // cout << "answer1 : " << answer_1 << '\n';
  // cout << "answer2 : " << answer_2 << '\n';
  // cout << "direct_answer : " << direct_answer << '\n';
  // cout << "tmp_target : " << tmp_target << '\n';
  // cout << "tmp2_target : " << tmp2_target << '\n';
  cout << answer << '\n';
  return 0;
}