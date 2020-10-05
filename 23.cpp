//연속 부분 증가수열
//굳이 배열로 안잡아도 되긴함..
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int a[100001];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 1; 
    int max = -1;
    for(int i=0; i<n-1; i++){
        if(a[i]<= a[i+1]){
            count++;
            if(count > max)
            max = count;
        }
        else
        count = 1;    
    }
    cout << max;

    return 0;
}  