//투포인트 알고리즘과 비슷.. 포인트를 세개씀
#include<stdio.h>
#include<iostream>
using namespace std;
int ans[1501];
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int p2=1, p3=1, p5=1;    
    ans[1] = 1;    
    int min = 2147000000; //min 범위 외워두자
    for(int i=2; i<=n; i++){
        if(2*ans[p2]<3*ans[p3])
        min = 2*ans[p2];
        else
        min = 3*ans[p3];

        if(5*ans[p5]<min)
        min = 5*ans[p5];
        if(2*ans[p2] == min) 
        p2++;
        if(3*ans[p3] == min) 
        p3++;
        if(5*ans[p5] == min) 
        p5++;                
        ans[i] = min;        
    }
    // for(int i=1; i<=n; i++){
    //     cout << ans[i] << " ";
    // }
    cout << ans[n];
    return 0;
}