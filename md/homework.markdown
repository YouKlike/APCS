# <center>程式設計(二)</center>

&nbsp;

## <center>姓名: 蔡秉岑</center> <center>學號: 411446510</center> <center>科系: 電機工程學系電機資訊組</center>&nbsp;

&nbsp;

### 題目: [g774. 校隊 (School Team)](https://zerojudge.tw/ShowProblem?problemid=g774)

![](zerojudge1.png)

- 出處: TOI練習賽202111潛力組

- 編譯器: Visual Studio Code

- 程式語言: C++

### 解題思路

1. 將每個班級中最快的男生和女生作為一對，構成 $N+M$ 個人。
2. 按照 $Boy - Girl$ 的時間總和從小到大排序。
3. 依次從頭開始遍歷 $N+M$ 個人，先根據男生減掉女生最小的為第一位選手以此類推，先取男生再取女生。

總結: 在每一步選擇的時候，我們總是選擇最優的，也就是選擇使$Boy - Girl$最小的，這就是貪心演算法。

複雜度: $O(tlogt)$

```cpp
#include<bits/stdc++.h>
using namespace std;
struct Player {
    int Boy;
    int Girl;
    int diff;
    Player(int B,int G) {
        Boy = B;
        Girl = G;
        diff = B - G; 
    }
};
vector<Player> v; 
bool cmp(Player x,Player y) { // 計算 男生 - 女生 最大差
    if (x.diff == y.diff) return x.Boy < y.Boy;
    return x.diff < y.diff;
}

int main() {
    int N,M;
    cin >> N >> M;
    for(int i = 0;i < N+M;i++) {
        int b,g;
        cin >> b >> g;
        v.push_back(Player(b,g));
    }
    sort(v.begin(), v.end(), cmp);
    int sum = 0;
    for(int i = 0;i < N+M;i++) {
        if(i < N) sum += v[i].Boy; // 取前N個男生
        else sum += v[i].Girl; // 取後M個女生
    }
    cout << sum;
    return 0;
}
```

### 解題心得

當初我在解這題的時候第一個想法是使用 DP 但看解題分析的人說可以使用 Greedy 看看(網路上並沒有Greedy的解法)，於是我好好的去複習一下Greedy要怎麼使用我參考了 `會議問題/排班問題` 好在這題並不難，很順利的利用struct + 自訂 sort function 的方式處理了排序的問題，但後面送入測資的時候錯誤了。

![](zerojudge.png)

經過一連串的 debug 我發現是我一開始判定的想法有問題，我一開始是想 $Boy - Girl$ 取絕對值如果相同那麼先取第一個數字，但其實根本不用這樣，我應該是要先預設某個性別，然後再去找換了會最好的方法，所以假設 (男,女) (20,10),(10,20)，然後 第一筆資料男生減掉女生為10，第二筆資料男生減掉女生為-10，你會發現根本就不需要取絕對值程式就會自動取最佳解了。

### 參考文獻

[會議問題/排班問題 貪心演算法 Greedy Algorithm](https://www.youtube.com/watch?v=jathKNkeP90)
