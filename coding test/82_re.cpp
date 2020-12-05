//순열 구해주기

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int n,r,arr[16],ch[16],res[16];

void DFS(int x){
    if(x==r){
        for(int i=0; i<x; i++){
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }
    else{
        for(int i=1; i<=n; i++){    
            if(ch[i]==0){
                res[x] = arr[i];
                ch[i]=1;
                DFS(x+1);
                ch[i] = 0;
            }
        }
    }


}

int main(){
    freopen("input.txt","rt",stdin);
    cin >> n >> r;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    DFS(0);






    return 0;
}


