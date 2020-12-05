#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;    
    freopen("input.txt","rt",stdin);
    cin >> n;
    int is[n+1],os[n+1];
    for(int i=1; i<=n; i++){
        cin >> is[i];
    }
    // 5 3 4 0 2 1 1 0
    for(int i=n; i>=1; i--){
        int pos = i;
        for(int j=0; j<is[i]; j++){
            os[pos] = os[pos+1];
            pos++;
        }
        os[pos] = i;
    }
    for(int i=1; i<=n; i++){
        cout << os[i] << " ";
        
    }
    return 0;
}