#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<vector<int>>map(n+1,vector<int>(n+1,0));
    vector<int>front(n+1);
    vector<int>right(n+1);
    for(int i=1; i<=n; i++){
        cin >> front[i];
    }
    for(int i=n; i>=1; i--){
        cin >> right[i];
    }
    for(int j=1; j<=n; j++){
        for(int i=1; i<=n; i++){
            map[i][j] = front[j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(map[i][j]>right[i])
            map[i][j] = right[i];            
        }
    }
    int sum = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sum+=map[i][j];
        }        
    }
    cout << sum;
    return 0;
}