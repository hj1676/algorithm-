//전략적인 설명듣고 코드 구현 해보기 


//지금 내가 짠 코드 시간 복잡도 초과된다....
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);s
    int n;
    cin >> n;    
    for(int i=1; i<=n; i++){
        int count = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
            count++;
        }
        cout << count << " ";
    }
    return 0;
}
