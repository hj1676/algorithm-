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
    for(int i=1; i<n; i++){
        int idx = i;
        for(int j=i+1; j<=n; j++){
            if(arr[j]<arr[idx]){
                idx = j;                
            }
        }
        int tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
    }
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}