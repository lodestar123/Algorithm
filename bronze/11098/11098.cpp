// 11098 첼시를 도와줘!
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, playerNum;
  int playerCost, maxCost;
  string playerName, maxPlayerName;
  cin >> n;

  for (int i = 0; i < n; i++) {

    cin >> playerNum;
    maxCost = -1;

    for (int j = 0; j < playerNum; j++) {

      cin >> playerCost >> playerName;

      if (playerCost > maxCost) {
        maxCost = playerCost;
        maxPlayerName = playerName;
      }
    }
    cout << maxPlayerName << endl;
  }

  return 0;
}
