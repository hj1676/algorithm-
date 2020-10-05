//어려운문제.. 추후 복습하자
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n,pos;
    cin >> n; 
    vector<int> is(n+1),os(n+1); //번호를 삽입해야하므로
    for(int i=1; i<=n; i++){
        cin >> is[i];
    }

    //큰거부터.. 작아지면서 처리해야함 pos는 시작위치        
    for(int i=n; i>=1; i--){               
        pos = i; //시작 위치                
        for(int j=1; j<=is[i]; j++){
            os[pos] = os[pos+1];
            pos++;
        } //땡겨주기 개수만큼 
        os[pos] = i;           
    }
    for(int i=1; i<=n; i++){
        cout << os[i] << " ";
    }
    



    return 0;
}
