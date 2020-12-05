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
    
    for(int i=1; i<=n-1; i++){
        int idx = i;
        for(int j= i+1; j<=n; j++){
            if(arr[j]>arr[idx])
            idx = j;
        }
        int tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;        
    }
    int count = 1;
    int res = 0;
    for(int i=2; i<=n; i++){
        if(arr[i]!=arr[i-1]){
        count++;
        res = arr[i];
        }
        if(count == 3)
        break;
    }
    cout << res;


    return 0;
}