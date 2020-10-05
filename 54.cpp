//54번 올바른 괄호(stack)
#include<stdio.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    freopen("input.txt","rt",stdin);
    
    stack<char>s;    
    char input[31];
    cin >> input;
    for(int i=0; input[i]!='\0'; i++){        
            if (input[i] == '(')
            s.push(input[i]);

            else{
            if(s.empty()){
                cout << "NO";
                exit(0); //걍 바로 종료시켜주기 
            }            
            s.pop();                            
            }
    }
    if(s.empty())
    cout << "YES";

    else
    cout << "NO";



    return 0;
}