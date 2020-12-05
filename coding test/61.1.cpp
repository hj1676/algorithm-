#include<iostream>
#include<vector>
using namespace std;
int n,m,cnt=0;
vector<int>arr(n+1);

void DFS(int x, int sum){
        
    if(x==n+1){
        if(sum==m)
        cnt++;
        return;
    }
    else{
        DFS(x+1,sum-arr[x]);
        DFS(x+1,sum);
        DFS(x+1,sum+arr[x]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    DFS(1,0);
    cout << cnt;


    return 0;
}