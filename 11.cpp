//숫자의 총개수 
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int num;
    cin >> num; 
    int temp;
    int answer = 0;
    for(int i=1; i<=num; i++){
        temp = i;
        while(temp>0){            
            temp = temp/10;
            answer++;            
        }
    }
    cout << answer;
    return 0;
}