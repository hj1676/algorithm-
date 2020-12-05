#include<stdio.h>
#include<iostream>
using namespace std;
int DFS(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*DFS(n-1);
    }

}

int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    cout << DFS(n);
    return 0;
}