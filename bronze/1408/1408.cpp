// 1408 24

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int h1, m1, s1, h2, m2, s2;
  int h, m, s;

  scanf("%d:%d:%d", &h1, &m1, &s1);
  scanf("%d:%d:%d", &h2, &m2, &s2);

  (s2 >= s1) ? (s = s2-s1) : (s = 60-s1+s2, m2--);
  (m2 >= m1) ? (m = m2-m1) : (m = 60-m1+m2, h2--);
  (h2 >= h1) ? (h = h2-h1) : (h = 24-h1+h2);

  h < 10 ? cout << "0" << h : cout << h;
  cout << ":";
  m < 10 ? cout << "0" << m : cout << m;
  cout << ":";
  s < 10 ? cout << "0" << s : cout << s;
  
  return 0;
}
