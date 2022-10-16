# 程式設計


### printf()
- **printf(format string,item1,item2,...);**
    - Formatted characters
        - %c for char
        - %d for int
        - %f for double
        - %s for string
        - %e for 科學記號
        - &m.nf m代表欄寬; n代表精準度
使用方式(印出一般的):
```cpp=
#include<iostream>
using namespace std;
int main() {
    int a=10;
    printf("顯示 %d 數字" , a);
    /*
     * 顯示 10 數字
    */
    
}
```

使用方式(印出%m.nf):
```cpp=
#include<iostream>
#include<iomanip> // for setprecision() , setw()
using namespace std;
int main(){
    printf("%.1f , %.2f\n" , 1.234 , -1.235); // 四捨五入
}
```
![](https://i.imgur.com/izoLQgv.png)

### scanf()
- **scanf(format string,memory address);**
    - Formatted characters
        - %c for char
        - %d for int
        - %f for float , %If for double
        - %s for string

使用方式:
```cpp=
include<iostream>
using namespace std;
int main() {

    int interger1 , interger2 , sum;
    scanf("%d%d" , &interger1,&interger2); // == cin >> interger1 >> interger2;
    /*
     * & 為指向變數的記憶體位置(參照)
     */
    sum = interger1 + interger2;
    printf("%d\n" , sum);
}
```
### 參照 
```cpp=
int n = 10;      // 定義變數
int *p = &n;     // 定義指標，儲存 n 的位址
int &r = n;      // 定義參照，是 n 的別名
```

上面的程式中，最後一行定義參考，參考一定要初始，例如以下定義無法通過編譯：
```cpp=
int &r; // error: 'r' declared as reference but not initialized
```

下列程式碼把他想成**我的b儲存的是a的記憶體位置，所以a變了b也會跟著變**
```cpp=
#include<iostream>
using namespace std;
int main() {
    int a=10;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    a = 20;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    /*
     * a: 10
       b: 10
       a: 20
       b: 20 */
}
```


### 萬用標題庫

為甚麼要使用這個標題庫? 你可以把他想成一個大總集，可以不必再去include其他標題。

優化執行速度:
```cpp=
ios::sync_with_stdio(0); 
cin.tie(0);
```

```cpp=
#include<bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
}
```

實用技巧
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    while(cin >> k && k) {
        /*
         *  意思為 輸入 k 然後判斷k
         * 假設 k 等於 0 的話就直接結束程式
    }
}
```




d073
```cpp=
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (n+2)/3 << endl;
}
```

a002
```cpp=
#include<iostream>
using namespace std;
int main (){
    int a , b;
    cin >> a >> b;
    cout << a+b;
}
```

d461
```cpp=
#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    cout << a - 1;
}
```

d060
```cpp=
#include<iostream>
using namespace std;
int main(){
     int a; 
     cin >> a;
     cout << (60-a+25)%60 << endl;
}
```

d827
```cpp=
#include<iostream>
using namespace std;
int main(){
     int n , total;
     cin >> n;
     if (n>12)
          total += 50 * (n/12) + 5 * (n%12);
     else 
          total += n * 5;
     cout << total << endl;
}
```

c776
```cpp=
#include<iostream>
using namespace std;
int main(){
     int n , m;
     cin >> n >> m;
     cout << 6 + 4*(m-1) + (n-1) * (3*m+2)  << endl;
}   
```

d065
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[50],maxNum=0;
    for (int i = 0;i<3;i++) {
        cin >> a[i];
        if (a[i] > maxNum) 
            maxNum = a[i];
    }
    cout << maxNum;
}
```
d064
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a%2 == 0)
        cout << "Even";
    else 
        cout << "Odd";
}
```


d058
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a > 0) 
        cout << "1";
    else if (a < 0)
        cout << "-1";
    else
        cout << "0";
}
```

d126
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    while (cin >> a >> b) {
        cout << a*2+b*2 << "\n";
    }
}
```

d066
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;

    if (a >= 8 && a < 17) {
        cout << "At School";
    } else if (a == 7 && b >= 30) {
        cout << "At School";
    } else {
        cout << "Off School";
    }   
}
```

a006
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,x1,x2,s;
    cin >> a >> b >> c;
    x1=(sqrt(b*b-4*a*c)-b)/(2*a);
    x2=-(sqrt(b*b-4*a*c)+b)/(2*a); 
    s = b*b-4*a*c;
    if (s == 0) cout << "Two same roots x=" << x1;
    else if (s < 0) cout << "No real root";
    else cout << "Two different roots x1=" << x1 << " , x2=" << x2;
}
```

a053
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N > 40) cout << "100";
    else if (N >= 21 && N <= 40) cout << (10*6)+(10*2)+(N-20);
    else if (N >= 11 && N <= 20) cout << (10*6)+((N-10)*2);
    else cout << N*6;
}
```

d460
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a >= 60) cout << "399";
    else if (a >= 18 && a < 60) cout << "890";
    else if (a >= 12 && a < 18) cout << "790";
    else if (a >= 6 && a < 12) cout << "590";
    else cout << "0";    
}
```

d273
- 這題很賤假設n=0 , k=0的時候也會算Ok!
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    while (cin >> n >> k) {
        if (n != 0 && k == 0) {
            cout << "Impossib1e!" << "\n";
            continue;
        } else if (n == 0 && k == 0) {
            cout << "Ok!" << "\n";
            continue;
        } 
        if (n % k == 0) cout << "Ok!" << "\n";
        else if (n % k != 0) cout << "Impossib1e!" << "\n";
    }
}
```

d053
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a,b;
    while (cin >> a >> b) {
        cout << a*b-1 << "\n";
    }
}
```

a861
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main () {
    int H,W,P;
    while(cin >> H >> W) {
        P = 2 * H + 2 * W;
        cout << P << "\n";
    }
}
```

d485
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if (a == b && a%2 != 0) cout << 0;
    else if (a == 1) cout << abs((b/2) - (a/2));
    else cout << abs((b/2) - (a/2)) + 1;
}
```

d039
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b,sum;
    cin >> t;
    for (int i = 0;i < t;i++) {
        sum = 0;
        cin >> a >> b;
        sum = (a/3) * (b/3);
        cout << sum << "\n";
    }
}
```

### 10/10

a004
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    while(cin >> a) {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) cout << "閏年\n";
        else cout << "平年\n";
    }
}
```

d069
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,year;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "a leap year\n";
        else cout << "a normal year\n";
    }
}
```

d070
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main () {
    int year = 1;
    while (cin >> year) {
        if (year == 0) break;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "a leap year\n";
        else cout << "a normal year\n";
    }
}
```

d071
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main () {
    int year;
    while (cin >> year) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "a leap year\n";
        else cout << "a normal year\n";
    }
}
```

d072
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,year;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "Case " << i+1 << ": a leap year\n";
        else cout << "Case " << i+1 << ": a normal year\n";
    }
}
```

### 10/15

a824
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,sum = 0,t=0;
    cin >> a >> b >> c;
    for (int i = 1;i <= c;i++) {
        if (i % a == 0 || i % b == 0) sum += i;
    }
    sum = sum%26;
    for (char i = 'A' ; i <= 'Z';i++) {
        t += 1;
        if (t == sum) cout << i;
    }
}
```

a024
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,t;
    cin >> a >> b;
    while (a % b) {
        t = a % b;
        a = b;
        b = t;
    }
    cout << b;
}
```

a215
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    while (cin >> n >> m) {
        int sum = 0;
        for (int i =0;;i++) {
            sum += n + i;
            if (sum > m) {
                cout << i+1 << "\n";
                break;
            }
        }
    }
}
```

d074
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,num,dp[50],maxNum=0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> dp[i];
    }
    for (int i = 0;i <n;i++) {
        if (dp[i] > maxNum) maxNum = dp[i];
    }
    cout << maxNum;
}
```

c022
```cpp=
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b;j++) 
            if (j%2 == 1) sum += j;
        cout << "Case " << i+1 << ": " << sum << "\n";
    }
}
```
