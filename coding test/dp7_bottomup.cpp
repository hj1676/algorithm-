//bottom up 방식으로 하니까 ㄹㅇ 존나쉽네 

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;

    int arr[21][21];
    int dy[21][21];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
        }
    }
    dy[1][1] = arr[1][1];
    for(int i=2; i<=n; i++){
        dy[i][1] = dy[i-1][1]+arr[i][1];
        dy[1][i] = dy[1][i-1]+arr[1][i];
    } //일단 1행 part와 1열 part를 초기화 가능
    
    for(int i=2; i<=n; i++){
        for(int j=2; j<=n; j++){
            dy[i][j] = min(dy[i-1][j],dy[i][j-1]) + arr[i][j];                        
        }
    }
    cout << dy[n][n];
    return 0;
}