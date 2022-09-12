#include<iostream>
using namespace std;
int main(){
     int a; 
     cin >> a;
     if (a >= 25)
          cout << (60-a+25)%60 << endl;
     else if (a < 25)
          cout << abs(25-a) << endl;
}