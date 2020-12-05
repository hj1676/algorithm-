#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    freopen("input.txt","rt",stdin);
    cin >> n >> k;
    queue<int>Q;
    for(int i=1; i<=n;i++){
        Q.push(i);
    }

    int cnt = 0;
    while(!Q.empty()){   
        for(int i=1; i<k; i++){
            int tmp = Q.front();
            Q.pop();
            Q.push(tmp);
        }        
        Q.pop();
        if(Q.size()==1){
            cout << Q.front();
            Q.pop();
        }
    }
    
    return 0;
}