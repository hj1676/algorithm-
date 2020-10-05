//제한시간 1초  -> 이중 for문 비교는 x
//포인트 변수 만들어서 하기
//투포인트 알고리즘 

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    freopen("input.txt","rt",stdin);
    int n,m;
    int p1=0,p2=0,p3=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    } //정렬을 해야 한다. 
    sort(a.begin(), a.end()); //vector에서 자동으로 오름차순으로 정렬해줌 (알고리즘에서 제공해주는 퀵정렬) //a.begin() 벡터 시작점   a.end()벡더 끝나는점
    cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin >> b[i];
    } //정렬을 해야한다 .
    sort(b.begin(), b.end());
    vector<int> c(n+m);
    //투포인트 알고리즘
    while(p1<=n && p2<=m){
        if(a[p1]==b[p2]){//교집합인 경우 
            c[p3++] = a[p1++];            
            p2++;
        } 
        else if(a[p1]<b[p2]){
            p1++;
        }
        else
        p2++;
    } //하나라도 끝나게 되면 교집합은 더이상 없으므로 더 이상 진행할 필요가 없다.
    for(int i=0; i<p3; i++){
        cout << c[i] << " ";
    }

    return 0;
}

