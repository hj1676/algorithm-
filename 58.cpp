//DFS 설명 및 예시 
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void D (int v){ //정점 노드 v받기 
    if(v>7) //정점은 7까지 있으므로 정점이 7보다 커진다면 종료시키기 
    return;

    else{ //왼쪽 자식 노드 호출, 오른쪽 자식노드 호출 
        cout << v << " "; //전위              
        D(v*2);
        cout << v << " "; //중위
        D(v*2+1);
        cout << v << " "; //후위 
    }
}



int main(){
    freopen("input.txt","rt",stdin);
    D(1);
    return 0;
}