#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    freopen("in5.txt","rt", stdin);
    int n;
    cin >> n;
    vector<vector<int>>a(n, vector<int>(n,0)); //n*n 배열 0으로 일단 다 초기화 
    vector<int>p(n);
    vector<int>q(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    for(int i=0; i<n; i++){
        cin >> q[i];
    }
    
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            a[i][j] = p[j];
        }
    }

    //이거 index 헷갈리면 그냥 받을때 거꾸로 받기 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>q[n-i-1])
            a[i][j]=q[n-i-1];
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum += a[i][j];
        }
    }

    cout << sum;




    return 0;
}