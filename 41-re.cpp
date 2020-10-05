//ㄹㅇ 존나 창의적인 문제..
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
    int a,b=1,count=0,tmp;
    cin >> a;
    tmp = a; //원래 숫자를 저장 

    //처음에 두개로 가능한지 확인
    a--;//일단 1이빠지고 
    while(a>0){
        b++; //b가 바로 두개짜리로 하겠다, 세깨자리로 하곘다 확인하는 것 
        a = a-b; //2가빠지고..3이빠지고..4가빠지고.......
        if(a%b==0){//되는 경우
            for(int i=1; i<b; i++){ //분배해주기 
                cout << (a/b)+i << " + "; // 7+
            }
            cout << (a/b)+b << " = " << tmp << endl;
            count ++;
        }
    }



    




    return 0;
}