#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);    
    char a[101];
    int cnt[10] = {0,};
    freopen("input.txt","rt",stdin);
    cin >> a;
    for(int i=0; a[i]!='\0'; i++){
        cnt[a[i]-48]++;
    }
    int max = -2147000000, res = 0;
    for(int i=1; i<=9; i++){
        if(cnt[i]>max){
        max = cnt[i];
        res = i;
        }
    }
    cout << res;
    return 0;
}