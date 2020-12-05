#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<int>chk(n+1,0);    
    for(int i=2; i<=n; i++){
        int tmp = i;    
            int j = 2;            
            while(tmp>1){
                if(tmp%j==0){
                    chk[j]++;
                    tmp = tmp/j;                    
                }
                else
                j++;
            }
    }
    cout << n << "! = ";
    for(int i=1; i<=n; i++){
        if(chk[i]!=0)
        cout << chk[i] << " ";
    }
    return 0;
}