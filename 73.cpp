//최대힙..우선순위큐 max heap


//자연수가 입력되면 max heap에 계속 insert
//0이 입력되면 루트노트 pop(최대값)  -1입력되면 종료 
//비어있으면 -1출력 

//우선순위큐가 max heap 구조로 운영이 된다!!!!

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int a;
    priority_queue<int> pQ;
    while(true){
        cin >> a; //숫자계속 받기 
        if(a==-1) break; //-1입력되면 프로그램 종료 
        if(a==0){
            if(pQ.empty())
            cout << "-1" << endl;
            else{
                cout << pQ.top() << endl; //priority queue에서는 front가 아니라 top이다!!!!!!
                pQ.pop();
            }
        }
        else{ //자연수가 입력되었을 경우 집어넣어주기 ㄴ
            pQ.push(a);
        }
        
    }
    return 0;
}

