//냅색 알고리즘 last (가방 문제)
//최대 점수 구하기  .. 현수 -> n개의 문제 (n개는 얻는점수 + 걸리는 시간)

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    vector<int> dy(m+1,0);
    for(int i=1; i<=n; i++){
        int get, time;
        cin >> get >> time;
        for(int j=time; j<=m; j++){
            dy[j] = max(dy[j], dy[j-time]+get);
        }
    }
    cout << dy[m];

    return 0;
}


