#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("in5.txt","rt",stdin);
    cin >> n;
    vector<int>chk(n,0);
    vector<int>map(n+1);    
    for(int i=1; i<=n; i++){
        cin >> map[i];
    }        
    for(int i=1; i<=n-1; i++){
        chk[abs(map[i+1]-map[i])]++;        
    }        
    bool flag = true;
    for(int i=1; i<=n-1; i++){
        if(chk[i]!=1){
            flag = false;
            break;
        }
    }
    if(flag==true)
    cout << "YES";
    else
    cout << "NO";
    




    return 0;
}