// 2941 크로아티아 알파벳

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str;
  int result;
  vector<string> v = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

  cin >> str;

  for (int i = 0; i < 8; i++) {
    while (str.find(v[i]) != string::npos) { 
      str.replace(str.find(v[i]), v[i].length(), "@");
    }
  }
  cout << str.length();

  return 0;
}
