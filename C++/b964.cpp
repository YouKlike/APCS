#include<bits/stdc++.h>
using namespace std;
int main() {
    int student,maxFailed = -1,minPass = 101;
    bool FailedChange = false,PassChange = false;
    cin >> student;
    int grade[student];
    for (int i = 0;i < student;i++) cin >> grade[i];
    int len = sizeof(grade) / sizeof(int);
    sort(grade,grade + len);
    for (int i = 0;i < student;i++) cout << grade[i] << " ";
    for (int i = 0;i < student;i++) {
        if (grade[i] < 60 && grade[i] > maxFailed) {
            FailedChange = true;
            maxFailed = grade[i];
        }
        if (grade[i] >= 60 && grade[i] < minPass) {
            PassChange = true;
            minPass = grade[i];
        }
    }
    cout << "\n";
    if (maxFailed == -1 && FailedChange == false) cout << "best case\n";
    else cout << maxFailed << "\n";
    if (minPass == 101 && PassChange == false) cout << "worst case";
    else cout << minPass;
}