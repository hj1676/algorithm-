//dp 13번 .. 플로이드 와샬 응용문제
//회장 선출 문제 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;

    vector<vector<int>>dy(n+1,vector<int>(n+1,90));
    //조건문 잘 사용해주기 -1,-1일떄 break이니까... 입출력 조건 중 하나... 새로운 유형!
    while(true){
        int a, b;
        cin >> a >> b;
        if(a==-1 && b==-1)
        break;
        dy[a][b] = 1;
        dy[b][a] = 1;
    }
    for(int i=1; i<=n; i++){
        dy[i][i] = 0;
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){                
                dy[i][j] = min(dy[i][j], dy[i][k]+dy[k][j]);
            }
        }
    }
    vector<int>res(n+1,0);    
    int score = 100;
    for(int i=1; i<=n; i++){        
        for(int j=1; j<=n; j++){        
            res[i] = max(res[i], dy[i][j]);
        }
        score = min(score,res[i]);
    }
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(res[i]==score)
        cnt++;
    }
    cout << score << " " << cnt << endl;
    for(int i=1; i<=n; i++){
      if(res[i]==score)
      cout << i << " ";
    }
    return 0;
}