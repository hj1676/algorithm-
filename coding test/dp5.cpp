//최대선 연결하기 (LIS 응용)

#include<iostream>
#include<vector>
using namespace std;
int a[101];
int b[101];

int main(){
    ios_base::sync_with_stdio(false);        
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;   
    vector<int>arr(n+1);
    vector<int>dy(n+1);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    dy[1] = 1;
    int res = 0;
    for(int i=2; i<=n; i++){
        int max = 0;
        for(int j=i-1; j>=1; j--){
            if(arr[j]<arr[i]&&dy[j]>max)
            max = dy[j];
        }
        dy[i] = max + 1;                
        if(dy[i]>res)
        res = dy[i];
    }
    cout << res;
    return 0;
}