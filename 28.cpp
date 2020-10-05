//배열 써서 풀어야 할듯 .. 자료형의 한계 ㅅㅂ \
//ㄴㄴ -> 소인수분해해서 2와 5의 인수 숫자로 체크하는 식으로 해결해야한다.

//변수는 무조건 전역변수로 선언하자 앞으로 반복문 안에 있는거 아니면 
#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
    int n,j,tmp;
    cin >> n;    
    int num2, num5 = 0;

    //예를 들어 20 
    for(int i=2; i<=n; i++){
        tmp = i;
        
        while(tmp>1){
            if(tmp%2==0){   
                num2++;
                tmp = tmp/2;
            }
            else if(tmp%5==0){
                num5++;
                tmp = tmp/5;
            } 
            else
                break;
            
        }                                          
      
    }    
    if(num2>num5)
    cout << num5;
    else
    cout << num2;    
    

    return 0;
}