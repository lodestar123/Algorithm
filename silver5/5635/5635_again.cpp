// 5635: 생일
// 참고: https://ip99202.github.io/posts/%EB%B0%B1%EC%A4%80-5635-%EC%83%9D%EC%9D%BC/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 구조체를 사용하여 학생 정보를 저장
struct Student
{
  string name;
  int day, month, year;
};

//년>월>일 순으로 비교
bool compare(Student a, Student b) {
  if (a.year != b.year) return a.year < b.year; 
  if (a.month != b.month) return a.month < b.month;
  return a.day < b.day;
}

int main() {
  int n;cin >> n;
  vector<Student> s;

  for (int i = 0; i < n; i++) {
    cin >> s[i].name >> s[i].day >> s[i].month >> s[i].year;
  }

  sort(s.begin(), s.end(), compare);

  cout << s[n - 1].name << endl << s[0].name;

  return 0;
}
