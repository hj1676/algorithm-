//Jolly Jumpers -> 문제 이해를 다시 하자...

//다시 풀기 -> 중복값도 생각해야 한다!!!!!!

#include<stdio.h> //C식으로 printf 쓰기 위한 라이브러리
#include<algorithm> // abs 등 라이브러리 사용
#include<iostream>
#include<vector>//벡터 선언후 초기값은 0으로된다.
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n; 
    cin >> n;
    vector<int> check(n);  //체크를 하는 배열,동적으로 생긴다... 초기화는 0으로 됨
    int pre;
    int now;
    cin >> pre;            
    for(int i=1; i<n; i++){//n-1개 for문 돌리기        
        cin >> now;
        int pos;
        pos = abs(pre-now);
        if(pos>0 && pos<n &&ch[pos]==0) //중복이 생기는 순간 jolly jumper가 되는 것은 불가능 하다 
            ch[pos]=1;
        else{
            cout << "NO";
            return 0;
        }
        pre = now;                                                     
    }

    cout << "YES";
    return 0;
}