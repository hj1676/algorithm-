//소수의 개수를 구하기 ,제한 시간은 1초 !!!!
//제한 시간 1초!!!!
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    freopen("input.txt", "rt", stdin);
    int num,flag;
    int count = 0;
    cin >> num; //num을 입력받아오기 
    for(int i=2; i<=num; i++){
        flag = 1; //flag가 1이면 소수임


        //제곱근 까지만 돌리면 시간 절약 가능
        //제곱근 까지만 돌리면 시간 절약 가능
        //제곱근 까지만 돌리면 시간 절약 가능
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
            flag = 0;
            break;
            }
        }
        if(flag==1)
        count++;
    }
    cout << count;






    return 0;
}