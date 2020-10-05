//특정 수 만들기(DFS)
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m,a[11];

int c = 0;
void DFS(int L, int sum){
    if(L==n+1){
        if(sum==m){
            c++;                    
        }        
        return;
    }
    else{
        DFS(L+1,sum); //3가지 케이스가 있으므로 ㅇㅇ 
        DFS(L+1,sum+a[L]);
        DFS(L+1,sum-a[L]);
    }      
}
int main(){ 
    freopen("in5.txt","rt",stdin);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    DFS(1,0);
    if(c==0)
    cout << "NO";
    else
    cout << c;
    
    return 0;
}