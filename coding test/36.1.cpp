//삽입정렬
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
    int j;
    for(int i=2; i<=n; i++){
        int tmp = arr[i];
        for(j=i-1; j>=1; j--){
            if(arr[j]>tmp)
            arr[j+1] = arr[j];
            else
            break;           
        }
        arr[j+1] = tmp;
    }
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}