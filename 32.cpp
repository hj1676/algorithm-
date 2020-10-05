//선택 정렬 -> 한 수 기준 rt에서 가장 max or min 찾아서 교환 이렇게 for문 돌리는것
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    
    int tmp;
    int idx;
    for(int i=0; i<n-1; i++){        
        idx = i;    
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[idx]){
            idx = j                                
            }
        }
        tmp =arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
        
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
