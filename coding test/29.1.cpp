#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;    
    freopen("input.txt","rt",stdin);
    cin >> n;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        int tmp = i;
        while(tmp>=1){
            if(tmp%10==3){
            cnt++;            
            }
            tmp = tmp / 10;
        }
    }
    cout << cnt;


    return 0;
}