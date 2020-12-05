#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=1; i<=n-1; i++){
        bool flag = true;
        for(int j=i+1; j<=n; j++){
            if(arr[j]>arr[i]){
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