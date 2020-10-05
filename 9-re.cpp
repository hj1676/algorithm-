//시간 복잡도 줄이기 , by 배수로 가는 방법
#include<stdio.h>
#include<iostream>
using namespace std;
int cnt[50001];
//1~n까지의 카운트 배열 
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;    
    

    //예를 들어 n이 8이라면 1~8까지 각각의 약수에 대해서 
    for(int i=1; i<=n; i++){
        // 1 2 3 4 5 6 7 8
        for(int j=i; j<=n; j=j+i){
            //
            cnt[j]++;
        }
    }
    for(int i=1; i<=n; i++){
        cout<<cnt[i]<<" ";
    }
    
    
    return 0;
}
