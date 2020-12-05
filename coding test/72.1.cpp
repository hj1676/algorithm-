#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, k;
    freopen("input.txt","rt",stdin);
    cin >> n >> k;
    queue<int>Q;
    
    for(int i=1; i<=n; i++){
        Q.push(i);
    }

    int cnt = 1;
    while(!Q.empty()){        
        if(Q.size()==1){
        cout<<Q.front();
        exit(0);
        }

        
        if(cnt==k){
            Q.pop();
            cnt = 1;
        }
        else{
            int tmp = Q.front();
            Q.pop();
            Q.push(tmp);
            cnt++;
        }
    }





    return 0;
}