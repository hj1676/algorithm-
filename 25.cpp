//석차 구하기  
//인강 들어야겠다. brute force
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> score(n);
    vector<int> rank(n);    
    for(int i=1; i<=n; i++){ //딱 index맞게 일단 입력넣어주기 
        cin >> score[i];
        rank[i]=1; //모두 1등으로 초기화해주기 
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){ //2중 for문 어쩔수가 없다..
            if(score[i]<score[j])
            rank[i]++;
        }
    }
    for(int i=1; i<=n; i++){
        cout << rank[i] << " ";
    }
    return 0;
}