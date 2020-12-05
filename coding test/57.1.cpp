#include<iostream>
using namespace std;

void DFS(int x){
    if(x<1)
    return;

    else{
        DFS(x/2);
        cout << x%2;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    DFS(n);

    return 0;
}