#include<iostream>
using namespace std;

int digit_sum(int x){
    int sum = 0;
    int tmp = x;
    while(tmp > 0){
        sum += tmp % 10;
        tmp = tmp / 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int max = -214700000, max_val=0;
    for(int i=1; i<=n; i++){        
        int sum = digit_sum(arr[i]);
        if(sum > max){
        max = sum;
        max_val = arr[i];
        }
        if(sum == max){
            if(arr[i]>max_val)
            max_val = arr[i];
        }
    }

    cout << max_val;
    return 0;
}