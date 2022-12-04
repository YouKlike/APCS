    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        int N , M , S = 0,times = 0;
        cin >> N >> M;
        int num[N][M] = {0};
        int tmp[N] = {0};
        for (int i = 0;i < N;i++) {
            int maxNum = -1;
            for (int j = 0;j < M;j++) {
                cin >> num[i][j];
                if (num[i][j] > maxNum) {
                    maxNum = num[i][j];
                }
            }
            tmp[i] = maxNum;
            S += maxNum;
        }
        cout << S << "\n";
        for (int i = 0;i < N;i++) {
            if (S % tmp[i] == 0) {
                if (times == 0) cout << tmp[i];
                else cout << " " << tmp[i];
                times += 1;
            }
        }
        if (times == 0) cout << "-1\n";
}