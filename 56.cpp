//재귀함수 분석... 재귀는 stack과 비슷한 형식으로 이루어지는 것이다.


#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
//굳이 return할 필요없으니까 void로 작성
void D(int x){
    if(x==0)
    return; //return만 하면 함수 종료

    else{
        D(x-1);
        cout << x << " ";
    }
}

int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    D(n);
    return 0; //함수정상종료 
}