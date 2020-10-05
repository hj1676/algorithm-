//이항계수 
//조합을 의미한다 5C3 = 4C2 + 4C3 (이 공식은 5라는 사랍 입장에서 생각하면 된다. 5번 사람이 참여했을때와 참여하지 않았을떄를 생각)


//쓰레기 코드
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n,r;
int cnt = 0;
void DFS(int x, int sum){
    if(x==n){
        if(sum == r)
        cnt ++;
    return;
    }
    else{        
        DFS(x+1,sum);                                
        DFS(x+1,sum+1);        
    }
}

int main(){
    freopen("input.txt","rt",stdin);    
    cin >> n >> r;
    DFS(0,0);    
    //123
    //124
    //125
    //134
    //135
    //145
    //234
    //235
    //245
    //345
    cout << cnt;
    return 0;
}