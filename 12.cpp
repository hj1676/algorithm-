//숫자의 총개수 

//시간을 줄여야한다.
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int num;
    cin >> num;
    
    int sum = 0;
    int a = 9; //9, 90, 900 이렇게 늘어나게 
    int n = 1;
    int result = 0;
    while(num > sum + a){   
            sum = sum + a; //9 99 999 
            result = result + (a*n);
            n++; 
            a = a*10; 
    }        
    result = result + (num -sum)*n;
    cout << result;


    return 0;
}