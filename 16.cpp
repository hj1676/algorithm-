//16번 아나그램(구글 인터뷰 문제)
//아나그램이 무엇인지만 알면된다..
//hashing 기법 써서 알파벳들은 아스키넘버가 있으니 1대1 대응시키기

//아스키 A-Z 65-90  a-z 97-122
#include<iostream>
#include<stdio.h>
#include<algorithm> //exit지원 
using namespace std;

int a[60];
int b[60];

int main(){
    freopen("input.txt","rt",stdin);
    char str[100];
    cin >> str;
    for(int i=0; str[i]!='\0'; i++){ //문자열의 끝까지 탐색
        if(str[i]>=65 && str[i]<=90) //대문자
            a[str[i]-64]++;
        else
            a[str[i]-70]++; //소문자 
    }
    cin >> str;
    for(int i=0; str[i]!='\0'; i++){ //문자열의 끝까지 탐색
        if(str[i]>=65 && str[i]<=90) //대문자
            b[str[i]-64]++;
        else
            b[str[i]-70]++; //소문자 
    }
    for(int i=1; i<=52; i++){
        if(a[i]!=b[i]){
            cout << "NO";
            exit(0); //프로그램 종료
        }
    }
    cout << "YES";
    return 0;
    

}
