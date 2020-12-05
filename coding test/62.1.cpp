//병합정렬 -> merge sort 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int arr[101];
int tmp[101];
void DFS(int left, int right){
    int p1,p2,p3,mid;
    if(left<right){
        mid = (left+right)/2;
        DFS(left,mid);
        DFS(mid+1,right);
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
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
   
    DFS(1,n);

    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}