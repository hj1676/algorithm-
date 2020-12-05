#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    int n, m;
    cin >> n >> m;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int left = 1;
    int right = n;
    while(left<=right){
        int mid = (left + right) / 2;
        if(m == arr[mid]){
        cout << mid;      
        break;
        }  
        else if(m > arr[mid]){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    




    return 0;
}