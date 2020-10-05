//층간 소음 문제 , 약간 어려운데...
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){    
    freopen("input.txt", "rt", stdin);
    int n, m;
    cin >> n >> m;
    int val;
    int count =0;
    int max = -1;
    for(int i=0; i<n; i++){
        cin >> val;
        if(val>m)
        count++;
        else
        count=0;
        if(count>max)
        max = count;
    }
    if(max == 0)
    cout << -1;
    else
    cout << max;




    return 0;
}