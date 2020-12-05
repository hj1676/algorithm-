#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<int> score(n+1);
    vector<int> rank(n+1);
    for(int i=1; i<=n; i++){
        cin >> score[i];
        rank[i]=1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(score[i]<score[j])
            rank[i]++;
        }
    }
    for(int i=1; i<=n; i++){
        cout << rank[i] << " ";
    }




    return 0;
}