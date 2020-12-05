#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
} //이거 명심하자 
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<pair<int,int>>P;
    int max = -2147000000;
    for(int i=1; i<=n; i++){
        int m,d;
        cin >> m >> d;
        P.push_back(make_pair(m,d));
        if(d>max)
        max = d;        
    }
    sort(P.begin(),P.end(),cmp);
    int j,res=0;
    priority_queue<int>PQ;
    for(int i=max; i>=1; i--){
        for(; j<n; j++){
            if(P[j].second<i) break;
            PQ.push(P[j].first);
        }
        res += PQ.top();
        PQ.pop();
    }
    cout << res;
    return 0;
}