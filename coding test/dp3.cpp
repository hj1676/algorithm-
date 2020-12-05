//동적계획법은 사실 bottom up 방식이다..
//top down 방식은 재귀 방식이다. 그러나 top down 방식을 사용하며 메모지에이션을 사용하기에 동적계획법으로 보기도 한다!

#include<iostream>

using namespace std;
int dy[46];
int DFS(int n){
    if(dy[n]!=0)
    return dy[n];

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

