//최소비용(DFS : 가중치 방향그래프 인접리스트)
#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int n, check[21];
vector<pair<int,int>>arr[21];

vector<int>ans;
int sum = 0;
void DFS(int v){
    if(v==n){
        ans.push_back(sum);
    }
    else{
        for(int i=0; i<arr[v].size(); i++){
            if(check[arr[v][i].first]==0){                
                check[arr[v][i].first] = 1;
                sum += arr[v][i].second;
                DFS(arr[v][i].first);
                check[arr[v][i].first] = 0;
                sum -= arr[v][i].second;
            }         
        }
    }
}
int main(){
    freopen("input.txt","rt",stdin);
    int m;
    cin >> n >> m;
    int a,b,c;
    for(int i=1; i<=m; i++){
        cin >> a >> b >> c;
        // arr[a].push_back({b,c});       -> 두개다 똑깥은 표현  
        arr[a].push_back(make_pair(b,c)); 
    }
    check[1] = 1;
    DFS(1);
    int min = 21470000;
    for(int i=0; i<ans.size(); i++){
        if(ans[i]<min)
        min = ans[i];
    }
    cout << min;
    return 0;
}