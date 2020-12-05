#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    int m;
    cin >> m;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%m==0)
        sum+=i;
    }

    cout << sum;

    return 0;
}
