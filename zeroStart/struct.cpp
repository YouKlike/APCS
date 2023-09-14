#include<bits/stdc++.h>
using namespace std;
// 結構：自訂不同資料型態在一起
// ex: 利用不同變數(學號、座號、姓名...)去形容學生

// struct student{
//     int age;
//     char name[10];
// };

// student newone(){
//     student one = {23, {'L','o','n','y'}};
//     return one;
// };

// int main(){
//     student lynn = newone();
//     printf("%d",lynn.age);
// }


struct student{
  int age;
  char name[9];  
};

student newone(){
    student one = {23,{'J','o','h','y'}};
    return one;
}

int main(){
    student Johy = newone();
    printf("%d\n%s", Johy.age , Johy.name);
}