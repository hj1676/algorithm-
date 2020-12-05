#include<iostream>
using namespace std;

void DFS(int x){
    if(x>7)
    return;

    else{        
        DFS(x * 2);
        DFS(x * 2 + 1);
        cout << x << " ";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    DFS(1);
    return 0;
}