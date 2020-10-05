//75번 쵀대 수입 스케줄(priority queue 응용문제)

//와 이거는 ㄹㅇ 존나어렵네 진짜  -> 끊임없이 복습해야겠다..
//거꾸로 생각하자.. 3일쨰부터 가능한것부터 우선순위큐에 집어넣기
//구조체를 사용하기!!!
//구조체를 생성
#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
struct Data{
    int money;
    int when;
    Data(int a, int b){
        money = a;
        when = b;
    }            
    bool operator<(const Data &b)const{
        return when > b.when; //정렬기준 설정(구조체에서)
    }                                
}; //struct를 이용한 구조도 명심 

int main(){
    freopen("input.txt","rt",stdin);
    vector<Data>T; //data 구조체 배열
    priority_queue<int>PQ; //money담을 우선순위큐 
    int n , max = -2147000000, res = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        int m,d;
        cin >> m >> d;
        T.push_back(Data(m,d));
        if(d > max)
        max = d; //max값 설정 
    }
    sort(T.begin(), T.end()); //날짜가 큰 순서대로 정렬이됨
    int j = 0;

    for(int i = max; i>=1; i--){
        for(; j<n; j++){ //j는 그냥 계속 증가하는거..T벡터 계속 돈다 
            if(T[j].when<i) break; //날짜가 더 작아지면 안됨..break해주기 
            PQ.push(T[j].money);//우선순위큐에 가격정보 집어넣어주기
        }
        //다 집어넣어주면 각 날짜 기준으로 최대를 뺴줘야한다.
        if(!PQ.empty()){
            res += PQ.top();
            PQ.pop();
        }
    }
    cout << res;

    return 0;
}