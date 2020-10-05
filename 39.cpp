//이런 문제 풀때는 index번호를 쉽게 가져갈수 있게하자
//for 병합정렬 알고리즘.. 매우 중요
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int a[101];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }    
    int m;
    cin >> m;
    int b[101];
    for(int i=1; i<=m; i++){
        cin >> b[i];        
    }
    int c[300]; //여유있게잡아주기 
    // int p1,p2,p3=1; -> 이거 잘못된 문법이다!!
    int p1 = 1, p2 =1, p3 =1;
    while(p1<=n && p2<=m){
        if(a[p1]<b[p2]){
            c[p3++] = a[p1++]; //대입연사자를 넣고나서 커진다
        }
        else{
            c[p3++] = b[p2++];
        }
    }    
    while(p1<=n){ //아직 a배열이 남았을떄 
        c[p3++] = a[p1++];
    }
    while(p2<=m){
        c[p3++] = b[p2++];
    }
    //출력파트    
    for(int i=1; i<p3; i++){
        cout << c[i] << " ";
    }


    return 0;
}