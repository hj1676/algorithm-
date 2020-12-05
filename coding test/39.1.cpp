#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<int>a(n+1);    
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int>b(m+1);
    for(int i=1; i<=m; i++){
        cin >> b[i];
    }
    vector<int>c(n+m+1);
    int a_pos = 1;
    int b_pos = 1;
    int c_pos = 1;

    while(a_pos<=n && b_pos<=m){
        if(a[a_pos]<=b[b_pos]){ //a가 더 작을 떄 
            c[c_pos++] = a[a_pos++];
        }
        else{ //b가 더 작을 떄 
            c[c_pos++] = b[b_pos++];
        }
    }
    while(a_pos<=n){
        c[c_pos++] = a[a_pos++];

    }
    while(b_pos<=m){
        c[c_pos++] = b[b_pos++];
    }

    for(int i=1; i<=n+m; i++){
        cout << c[i] << " ";
    }
    return 0;
}