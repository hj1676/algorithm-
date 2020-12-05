#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    char input[31];
    freopen("input.txt","rt",stdin);
    cin >> input;
    stack<char>st;
    for(int i=0; input[i]!='\0'; i++){
        if(input[i]=='(')
        st.push(input[i]);        
        else{
            if(st.empty()){
                cout << "NO";
                exit(0);
            }
        st.pop();
        }
    }

    if(!st.empty())
    cout << "NO";
    else
    cout << "YES";
    
    return 0;
}
