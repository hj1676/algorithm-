//경로 탐색(DFS)
#include<stdio.h>
#include<iostream>
using namespace std;
int check[21],arr[21][21],cnt=0, n;
void DFS(int v){
    if(v==n){
        cnt++;
    }
    else{
        for(int i=1; i<=n; i++){
            if(arr[v][i]==1&&check[i]==0){
                check[i] = 1;
                DFS(i);                
                check[i] = 0;
            }
        }
    }

}
int main(){
    //레벨로 판단

    int m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    int a,b;
    for(int i=1; i<=m; i++){        
        cin >> a >> b;
        arr[a][b] = 1; //인접행렬 넣어주기 
    }

    check[1] = 1;
    DFS(1);
    cout << cnt;
    return 0;
}