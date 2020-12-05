#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> chk(n+1,0);
void DFS(int x){    
    if(x==n+1){
        for(int i=1; i<=n; i++){
            if(chk[i]==1)
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    else{    
        chk[x]=1;
        DFS(x+1);
        chk[x]=0;
        DFS(x+1);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    cin >> n;
    DFS(1);
    return 0;
}