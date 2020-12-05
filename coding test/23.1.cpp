#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    int now,next,cnt=1;
    cin >> now;
    int max = -2147000000;
    for(int i=2; i<=n; i++){
        cin >> next;
        if(next>=now)
        cnt++;           
                
        else cnt = 1;

        if(cnt > max)
        max = cnt;

        now = next;
    }
    cout << max;


    return 0;
}