#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    freopen("input.txt","rt",stdin);
    char input[31];
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
    if(st.empty())
    cout << "YES";

    else
    cout << "NO";

    return 0;
}