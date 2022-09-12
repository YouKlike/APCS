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