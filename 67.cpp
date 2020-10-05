//최소비용(DFS:인접행렬)
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int n, arr[21][21],check[21],cnt=0;
vector<int>ans;
int sum = 0;

//아니면 sum까지 두개 인자로 받는 DFS 생성하자 그러면 벡터 쓸 필요도 없음 
void DFS(int v){    
    if(v==n){
        cout << sum << " ";
        ans.push_back(sum);        
        // cnt++;
    }    
    else{
        for(int i=1; i<=n; i++){
            if((arr[v][i]!=0) && (check[i]==0)){
                check[i] = 1;
                sum += arr[v][i];                
                DFS(i);
                check[i] = 0;
                sum -= arr[v][i];
            }            
        }
    }
}
int main(){
    freopen("input.txt","rt",stdin);
    int m;
    cin >> n >> m;
    int p, q, r;
    for(int i=1; i<=m; i++){        
        cin >> p >> q >> r;
        arr[p][q] = r;
    } //일단 인접행렬을 받는다.
    check[1]=1;
    DFS(1);
    int min = 21470000;
    for(int i=0; i<ans.size(); i++){
        if(ans[i]<min)
        min = ans[i];
    }    
    cout << endl;
    cout << min;
    return 0;
}