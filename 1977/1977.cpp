// 1977 완전제곱수
#include <iostream>
using namespace std;

int main() {
  int iSquare = 0, min = 0, sum = 0;
  int M, N;

  cin >> M;
  cin >> N;

  for (int i = 1; iSquare <= N; i++) {
    iSquare = i * i;

    if (iSquare >= M && iSquare <= N) {
      if (min == 0) {
        min = iSquare;
      }
      sum += iSquare;
    }
  }

  if (min == 0) {
    cout << -1;
  } else {
    cout << sum << '\n' << min;
  }

  return 0;
}
