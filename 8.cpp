//올바른 괄호 , 원래의 경우는 stack문제 , 하지만 또따른 창의력으로 해결 가능 
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input2.txt", "rt", stdin);
    char a[30];    
    cin >> a;
    int count = 0;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='(')
        count++;
        else
        count--;
        if(count<0)
        break;        
    }
    if(count==0)
    cout<<"YES";
    else
    cout<<"NO";
    


}