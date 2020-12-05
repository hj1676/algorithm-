//알리바바와 40인의 도둑(Top-down) ... top-down 방식.. 피가 되고 살이 된다.

#include<iostream>
#include<algorithm>
using namespace std;
int arr[21][21], dy[21][21];

int DFS(int x, int y){
    if(dy[x][y]!=0)
    return dy[x][y];

    if(x==1 && y==1)
    return arr[1][1];
    
    else{
        if(x==1)
        return dy[x][y] = DFS(x,y-1) + arr[x][y];

        else if(y==1)
        return dy[x][y] = DFS(x-1,y) + arr[x][y];        

        else
        return dy[x][y] = min(DFS(x-1,y), DFS(x,y-1)) + arr[x][y];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
        }
    }
    cout << DFS(n,n);            
    return 0;
}
