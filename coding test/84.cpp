//휴가(samsung sw 역량 기출문제) DFS 활용


#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
vector<pair<int, int>>a;
int res=0,maxx=-2147000000;

void DFS(int x){
    //못뻗어나가게 조건 걸어주는것..
    if(x+a[x-1].first > n+1 || x>n){        
        if(res > maxx)
        maxx = res;
        return;
    }        
    //check배열 1 1 1 1 0 0 0 
    else{        
            res += a[x-1].second;                                    
            DFS(x+a[x-1].first);                              
            res -= a[x-1].second;                        
            DFS(x+1);                       
     }                            
}
int main(){
    freopen("in5.txt","rt",stdin);
    cin >> n; 
    for(int i=1; i<=n; i++){
        int p,q;
        cin >> p >> q;
        a.push_back(make_pair(p,q));
    } //a[1]->4,20 a[2]-> 2,10 a[3]->3,15 a[4]->3,20 a[5]->2,30 a[6]->2,20 a[7]->1,10
    DFS(1);
    cout << maxx;
    return 0;
}