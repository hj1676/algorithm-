//병합정렬. n개의 숫자가 입력되면 -> 오름차순 출력
//병합정렬은 분할 정복
#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int arr[100], tmp[100];

//1~8
//DFS(1,4) -> DFS(1,2) 7 6  // DFS(3,4) 3 1 
//DFS(5,8) 

void DFS(int left, int right){
    int p1,p2,p3,mid;
    if(left<right){
        mid = (left+right)/2;
        DFS(left,mid);// (1,2) -> (1,1)
        DFS(mid+1,right); //(2,2)
        p1 = left;
        p2 = mid+1;
        p3 = left;
        while(p1<=mid && p2<=right){
            if(arr[p1]<arr[p2])
            tmp[p3++] = arr[p1++];
            else
            tmp[p3++] = arr[p2++];
        }
        while(p1<=mid){
            tmp[p3++] = arr[p1++];
        }
        while(p2<=right){
            tmp[p3++] = arr[p2++];
        }
        for(int i=left; i<=right; i++){
            arr[i] = tmp[i];
        }
    }
    
}


int main(){
    freopen("input.txt","rt",stdin);        
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    DFS(1,n);
    cout << endl;
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";

    }
    return 0;
}