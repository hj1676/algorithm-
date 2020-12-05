#include<iostream>
#include<queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);    
    freopen("input.txt","rt",stdin);

    priority_queue<int>PQ;
    while(true){
        int a;
        cin >> a;
        if(a==-1)
        exit(0);

        else if(a==0){
            if(PQ.empty())
            cout<< "-1"<<endl;
            else{
                cout << -PQ.top()<<endl;
                PQ.pop();
            }
        }
        else
        PQ.push(-a);        
    }

    return 0;
}