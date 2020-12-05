//버블정렬
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
        for(int j=1; j<=n-i; j++){
            if(arr[j+1]< arr[j]){
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}