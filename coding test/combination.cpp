#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n, r;
int ch[20];
void DFS(int s, int L){
    if(L==r){ //종착점에 왔으면 
        for(int j=0; j<L; j++){
            cout << ch[j] << " ";
        }
        cout << endl;
    }

    //종착점에 오지 않았을 떄 가지를 뻗어나가기 
    else{        
        for(int i=s; i<n; i++){
            ch[L] = i;    //ch[L) -> ch[0]에 들어감 
            DFS(i+1, L+1);                                                 
        }

    } 
}

int main(){
    freopen("input.txt","rt",stdin);    
    cin >> n >> r;
    DFS(0,0);



    return 0;
}
