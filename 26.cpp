#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> player(n);
    vector<int> rank(n);
    for(int i=0; i<n; i++){
        cin >> player[i];
        rank[i]=i+1;        
    }
    //굳이 rank배열 안써도 되고 , 그냥 한사람기준으로 index 줄여가면서 1등까지 비교하기
    
  
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(player[i]>player[j])
            rank[i]--;
        }
        cout << rank[i] << " ";
    }
    return 0;
}