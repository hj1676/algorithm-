//네트워크 선 자르기 top-down 방식 (재귀, 메모이제이션) 이용해서 풀어지는 것

//이미 구해진 값을 table에 기록해주어서 시간 단축 (메모이제이션) 
#include<iostream>
using namespace std;
int dy[101]; //dy 테이블 -> 메모이제이션
int DFS(int n){
    if(dy[n]>0)
    return dy[n]; //메모이제이션을 통해 cut하기 
    
    if(n==1 || n==2)
    return n;

    else
    return dy[n] = DFS(n-1) + DFS(n-2);        
}

int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    cout << DFS(n);

    return 0;
}