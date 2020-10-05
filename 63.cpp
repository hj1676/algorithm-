//인접행렬(가중치 방향그래프)
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n,m;
    cin >> n >> m;
    
    vector<vector<int>>a(n,vector<int>(n,0)); //n*n 벡터 만들기 
    int p,q,r;
    for(int i=1; i<=m; i++){
        cin >> p >> q >> r;
        a[p-1][q-1] = r;                
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}