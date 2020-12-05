#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n,k,total=0;
    freopen("in5.txt","rt",stdin);
    cin >> n;
    vector<int>work(n+1);
    for(int i=1; i<=n; i++){
        cin >> work[i];
        total += work[i];
    }    
    
    cin >> k;
    if(k>=total){
    cout << "-1";
    return 0;
    }

    else{
    int pos = 0,cnt=0;
    while(true){
        pos++;
        if(pos>n)
        pos=1;
        if(work[pos]==0)
        continue;                
        work[pos]--;
        cnt++;
        if(cnt==k)
        break;
    }
    
    while(true){
        pos++;
        if(pos>n)
        pos=1;
        if(work[pos]!=0)
        break;        
    }
    cout << pos;
    }
    return 0;
}