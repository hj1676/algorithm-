//돌다리 건너기 with bottom up 

#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int dy[46];
    dy[1] = 1; dy[2] = 2;
    for(int i=3; i<=n+1; i++){
        dy[i] = dy[i-2] + dy[i-1];
    }
    cout << dy[n+1];


    return 0; 
}