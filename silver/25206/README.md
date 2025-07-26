## 25206 너의 평점은
링크: https://www.acmicpc.net/problem/25206
---
전공평점을 계산하는 문제이다.
과목평점을 등급에 따라 점수로 변환하기 위한 함수를 만들어 사용하였다.
처음에 학점 "P"를 처리하지 않아 오류가 발생했다. 

+) 추가로 알게 된 사실
  - cout.precision(n) : 실수의 정수부와 소수부를 합친 전체의 출력 범위를 n으로 설정
  (예: cout.precision(3) -> 123.456 -> 123)

  - cout << fixed : 소수점 아래 숫자의 출력 범위만 설정
  (예: cout << fixed << 123.456 -> 123.456)

  - cout.unself : cout << fixed로 설정된 상태에서 다시 cout << default로 되돌림
  (예: cout.unsetf(ios::fixed) -> cout << 123.456 -> 123.456789)

  - cout << setprecision(n) : 소수점 아래 n자리까지 출력
  (예: cout << setprecision(2) -> 123.456 -> 123.46)

  - setprecision()과 cout.precision()의 차이?
    - cout.precision()은 iostream 객체의 멤버 함수
    - setprecision()은 <iomanip> 헤더에 정의된 조작자 함수
    
    - cout.precision()은 전체 숫자의 자릿수를 지정할 때 사용하고, 출력 스트림의 정밀도를 영구적으로 섲어하거나 변경할 때 사용한다. 
    - setprecision()은 소수점 아래 자리수를 지정할 때 사용하고, 일시적으로 특정 출력에서만 정밀도를 변경하는데 더 적합하다.
      
    

