#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    stack<int>st;
    vector<char>res;
    int j = 1;    
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        st.push(a);
        res.push_back('P');
        while(!st.empty()){
            if(st.top()==j){
                st.pop();
                res.push_back('O');
                j+=1;
            }
            else
            break;            
        }
    }
    if(!st.empty())
    cout << "impossible";
    
    for(int i=0; i<res.size(); i++){
        cout << res[i];
    }


    return 0;
}