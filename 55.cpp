// 기차 운행 .. (stack 응용)

#include<stdio.h>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<char>res; //결과 벡터
stack<int>s;

int main(){
    freopen("input.txt","rt",stdin);    
    int n; cin >> n;
    int j = 1;    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        s.push(a);
        res.push_back('P');
        while(true){
            if(s.empty()) //비워져있으면 안되니깐 
            break;

            if(s.top()==j){
                s.pop();
                res.push_back('O');
                j++;
            }
            else //다르다면 다시 push해줘야 하니까
            break;
        }         
    }
    if(!s.empty())
    cout << "impossible";
    
    else{
        for(int i=0; i<res.size(); i++)
        cout << res[i];
    }


    return 0;
}