// 5635 생일
// 그냥 열심히 if로 구현해보자고 생각하며 코드를 작성함
// 이후 다른 사람의 코드를 참고하여 개선하여 코드를 작성함 (5635_again.cpp)

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  int maxStudent, minStudent;
  int maxY = 0, maxM = 0, maxD = 0;
  int minY = 9999, minM = 9999, minD = 9999;
  int y, m, d;
  string name[100], maxName, minName;
  
  for (int i = 0; i < n; i++) {
    cin >> name[i] >> d >> m >> y;

    //최대나이 찾기
    if (y > maxY) {
      maxY = y;
      maxStudent = i;
    } else if (y == maxY) {
      if (m > maxM) {
        maxM = m;
        maxStudent = i;
      } else if (m == maxY) {
        if (d > maxD) {
          maxD = d;
          maxStudent = i;
        }
      }
    } else { //최소나이 찾기
      if (y < minY) {
        minY = y;
        minStudent = i;
      } else if (y == minY) {
        if (m < minM) {
          minM = m;
          minStudent = i;
        } else if (m == minY) {
          if (d < minD) {
            minD = d;
            minStudent = i;
          }
        }
      }
    }
  }
  cout << name[maxStudent] << endl << name[minStudent] << endl;

  return 0;
}
