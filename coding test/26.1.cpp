#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<int>scores(n+1);
    vector<int>rank(n+1);
    for(int i=1; i<=n; i++){
        cin >> scores[i];
        rank[i] = i;
    }
    for(int i=1; i<=n; i++){
        for(int j=i-1; j>=1; j--){
            if(scores[i]>scores[j])
            rank[i]--;
        }
    }
    for(int i=1; i<=n; i++){
        cout << rank[i] << " ";
    }


    return 0;
}