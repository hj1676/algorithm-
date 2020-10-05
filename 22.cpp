//온도의 최대값 ... 시간복잡도를 해결해주어야한다. //2중 for문 방지해주어야한다...
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt",stdin) ;
    int n,k;
    cin >> n >> k;
    int temp[100000];
    for(int i=0; i<n; i++){
        cin >> temp[i];        
    }
    
    int max = -1;
    
    for(int i=0; i<n-k; i++){                
        int sum = 0;
        for(int j=i; j<i+k; j++)
        sum += temp[j];        
        if(sum > max)
        max = sum;        
    }
    cout << max;


    return 0;
}