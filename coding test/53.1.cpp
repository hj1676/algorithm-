#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    freopen("input.txt","rt",stdin);
    cin >> n >> k;

    int tmp = n;
    stack<int>st;
    char numbers[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(tmp>0){
        st.push(tmp%k);
        tmp = tmp/k;
    }
    while(!st.empty()){
        cout << numbers[st.top()];        
        st.pop();
    }


    return 0;
}