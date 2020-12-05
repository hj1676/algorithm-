//소수의 개수 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n; //만약 n이 20이라고 하면     


    int cnt = 0;
    for(int i=2; i<=n; i++){
        bool flag = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
            flag = false;
            break;
            }
        }
        if(flag==true)
        cnt++;
    }        
    cout << cnt;


    return 0;
}