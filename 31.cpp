//1장 마지막 문제 
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    char ch[4]; //char 배열이자녀...
    freopen("input.txt","rt",stdin);
    for(int i=0; i<100; i++){
        cin >> ch[i];
    }
    int ans = 0;
    

    if(ch[1]=='H'){
        if(ch[2]=='\0')
        ans = 13;
        else
        ans = 12 + 1*(ch[2]-48); //48은 숫자로 만드는 매커니즘 
    }
    else{
        if(ch[3]=='\0')
        ans = 12*ch[1]+1;
        else
        ans = 12*(ch[1]-48) + 1*(ch[3]-48);
    }    
    cout << ans;
    return 0;
}