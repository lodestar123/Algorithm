// 25206 너의 평점은


#include <iostream>
#include <vector>
using namespace std;

float invertScore(string str){
  if(str == "A+") return 4.5f;
  else if(str == "A0") return 4.0f;
  else if(str == "B+") return 3.5f;
  else if(str == "B0") return 3.0f;
  else if(str == "C+") return 2.5f;
  else if(str == "C0") return 2.0f;
  else if(str == "D+") return 1.5f;
  else if(str == "D0") return 1.0f;
  else if(str == "F") return 0.0f;
}

int main() {
  string subject, rank, str; 
  float grade, score;
  float totalGrade = 0.0f, totalScore = 0.0f;

  for (int i=0; i<20; i++){
    cin >> subject >> grade >> rank;

    if (rank == "P") continue;
    totalGrade += grade;
    score = invertScore(rank);
    totalScore += (grade * score);
    
  }
  //소수점 6자리까지 출력
  cout.precision(6); 
  cout << fixed;
  cout << totalScore / totalGrade;

  return 0;
}
