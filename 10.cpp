#include<iostream>
#include<stdio.h>
using namespace std;

//함수는 미리 선언해서 구현까지 해놔주자!!
int digit_sum(int x){
    int sum = 0;
    while(x>=1){
        sum = sum + (x%10);   // 125 ->5  12  -> 2 1 
        x = x / 10;
    }
    return sum;
}


int main(){
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int num;
    int sum,max,answer = 0;
    for(int i=0; i<n; i++){
        cin >> num;
        sum = digit_sum(num);
        if(sum > max){
            max = sum;
            answer = num;
        }
        if(sum == max){
            if(num > answer)
            answer = num;
        }
    }
    cout << answer;



    return 0;
}
