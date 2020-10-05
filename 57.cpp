//재귀함수 2진수 출력 

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;


// 11 tmp 1 x=5
// 5 tmp 1 x= 2 
// 2 tmp 0 x = 1
// x = 1
int tmp = 0;
void D(int x){    
    if(x==0)             
    return;    
    else{                  
        D(x/2);
        cout << x % 2; //stack 프레임 구조를 알면 이해 가능
    }
}
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    D(n); // 재귀함수 D
    return 0;
}
