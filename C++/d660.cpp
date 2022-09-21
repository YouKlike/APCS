#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T, c = 0, highJump, lowJump;
  cin >> T;
  while (T--) {
    int times, jump[100], highJump = 0, lowJump = 0;
    cin >> times;

    for (int i = 0; i < times; i++)
      cin >> jump[i];

    for (int i = 0; i < times - 1; i++) {
      if (jump[i + 1] > jump[i])
        highJump += 1;
      else if (jump[i + 1] < jump[i])
        lowJump += 1;
    }
    cout << "Case " << c + 1 << ": " << highJump << " " << lowJump << "\n";
    c += 1;
  }
}