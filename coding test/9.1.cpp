=#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
            cnt++;
        }
        cout << cnt << " ";
    }

    return 0;
}
