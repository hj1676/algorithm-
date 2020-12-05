#include<iostream>
using namespace std;
int unf[1001];
int Find(int x){
    if(x==unf[x])
    return x;
    else{
        return unf[x] = Find(unf[x]);
    }
}
void Union(int p, int q){
    p = Find(p);
    q = Find(q);
    if(p!=q)
    unf[p] = q;
}
int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
 
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        unf[i] = i;
    }
    for(int i=1; i<=m; i++){
        int p,q;
        cin >> p >> q;
        Union(p,q);
    }
    int a,b;
    cin >> a >> b;
    if(Find(a)==Find(b))
    cout << "YES";
    else
    cout << "NO";

    return 0;
}
