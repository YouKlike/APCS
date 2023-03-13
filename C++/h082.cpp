#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , m;
    cin >> n >> m;
    queue<int> idx , lose, win;
    long long S[1001],T[1001],cnt[1001] = {0};

    for (int i = 1;i <= n;i++) {
        cin >> S[i];
    }
    for (int i = 1;i <= n;i++) {
        cin >> T[i];
    }
    for (int i = 0;i < n;i++) {
        int num;
        cin >> num;
        idx.push(num);
    }

    while ((int)idx.size() != 1) {
        while ((int)idx.size() >= 2) {
            int p1 = idx.front();
            idx.pop();
            int p2 = idx.front();
            idx.pop();

            long long a = S[p1];
            long long b = T[p1];
            long long c = S[p2];
            long long d = T[p2];

            if (a*b >= c*d) { // 假設p1贏了
				S[p1] = a + c*d/(2*b);
				T[p1] = b + c*d/(2*a);
				S[p2] = c + c/2;
				T[p2] = d + d/2;
				win.push(p1);
				cnt[p2]++;
				if (cnt[p2] < m) {
					lose.push(p2);
				}
			} else {
				S[p1] = a + a/2;
				T[p1] = b + b/2;
				S[p2] = c + a*b/(2*d);
				T[p2] = d + a*b/(2*c);
				win.push(p2);
				cnt[p1]++;
				if (cnt[p1] < m) {
					lose.push(p1);
				}
			}
        }
        while ((int)idx.size() == 1) {
            win.push(idx.front());
            idx.pop();
        }

        while (!win.empty()) {
            idx.push(win.front());
            win.pop();
        }
        while (!lose.empty()) {
            idx.push(lose.front());
            lose.pop();
        }
    }
    cout << idx.front() << "\n";
}