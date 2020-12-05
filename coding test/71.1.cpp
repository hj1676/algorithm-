#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int s,e;
    freopen("input.txt","rt",stdin);
    cin >> s >> e;
    queue<int>Q;    
    int dx[3]={1,-1,5};
    int dis[10001];
    int cnt[10001]={0,};
    dis[s]=0;
    cnt[s]=1;
    Q.push(s);    
    while(!Q.empty()){                
        int tmp = Q.front();        
        Q.pop();
        for(int i=0; i<3; i++){
            int xx = tmp + dx[i];
            if(xx>=1 && xx<=10000&& cnt[xx]==0){                 
            cnt[xx]=1;
            dis[xx] = dis[tmp]+1;
            Q.push(xx);
            }
            else
            continue;            
        }        
    }    
    cout << dis[e];

    return 0;
}