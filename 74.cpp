//최소힙..우선순위큐 min heap
//73번의 최대힙과 반대 개념 
// 부모노드값이 자삭값보다 항상 작아야함 

//기본제공해주는 priority queue에서 바꿔줘야함.. 최소값이 우선이 되어야하므로 

//-붙어주어서 push를 해주면 된다! -> 그러면 최소힙이 되는 효과가 나타난다.
//출력할떄는 다시 -해서 출력 

#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int a;
    priority_queue<int>PQ;
    while(true){
        cin >> a;
        if(a==-1)
        break;

        if(a==0){
            if(PQ.empty())
            cout << "-1"<<endl;

            else{
                cout << -(PQ.top()) << endl;
                PQ.pop();
            }        
        }


        else{
            PQ.push(-a);
        }


    }


    return 0;
}
