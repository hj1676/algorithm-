//합이 같은 DFS
//합이 같은 부분집합 (DFS : 아마존 인터뷰)
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[11];
int n;
int total = 0;
bool flag = false;

void DFS(int L, int sum){

    if(sum > (total / 2))
    return;

    if(flag == true) 
    return;
       
    if(L==n+1){        
        if(sum==(total-sum))
        flag = true;   
        return;                          
    }
    else{
        DFS(L+1, sum+a[L]);        
        DFS(L+1, sum);
    }
}



int main(){
    freopen("input.txt","rt",stdin);    
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        total += a[i];
    }
    DFS(1,0);
    if(flag)
    cout << "YES";
    else
    cout << "NO";
    return 0;
} 
