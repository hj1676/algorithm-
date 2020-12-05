//복면산 SEND+MORE = MONEY  (MS 인터뷰)
//이것또한 순열을 사용하는 문제 


//순열로 랜덤배치만 하면 개좃밥인 문제 
#include<stdio.h>
#include<iostream>
using namespace std;

//SEND
//MORE
//MONEY 
//S E N D M O R Y
int a[8],ch[10];

int send(){
    return a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
}

int more(){
    return a[4]*1000 + a[5]*100 + a[6]*10 + a[1];
}

int money(){
    return a[4]*10000 + a[5]*1000 + a[2]*100 + a[1]*10 + a[7];
}

void DFS(int x){
    if(x==8){
        if(send() + more() == money()){
            if(a[0]==0 || a[4]==0) return;
            cout << " " << a[0] << a[1] << a[2] << a[3] << endl;
            cout << "+" << a[4] << a[5] << a[6] << a[1] << endl;
            cout << "-" << "-" << "-" << "-" << "-" << endl;
            cout << a[4] << a[5] << a[2] << a[1] << a[7];
        }

    }
    else{
        for(int i=0; i<=9; i++){
            if(ch[i]==0){
                a[x] = i; //0~9숫자를 집어넣음 .. 0~7번 index 8개 순열 
                ch[i] = 1;
                DFS(x+1);                
                ch[i] = 0;
            }
        }
    }



}
int main(){
    DFS(0);


    return 0;
}

