//기업에서 삽입정렬은 매우중요하다. 많이 나오는 편
//지 자리를 찾아가는 과정..
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
    int n; 
    cin >> n;
    vector<int> arr(n);
    int i,j,tmp;

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=1; i<n; i++){   
        tmp = arr[i];     
        for(j=i-1; j>=0; j--){            
            if(arr[j]>tmp)
            arr[j+1] = arr[j];
            else break;                      
        }
        arr[j+1] = tmp;
    }
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}