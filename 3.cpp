//진약수의 합
#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cin >> n;
    cout << "1";
    for(int i = 2; i<n; i++){
    //진약수 전 숫자를 알기가 힘들다.. 모든 진약수의 경우 1부터 시작.. 따라서 1부터 박아놓고 +숫자 +숫자 이런 구조로 출력하게 하는 마인드 입력!!!       
        if(n%i == 0){        
            cout << " + " << i;    
            sum+=i;                            
        }
        
    }
    cout << " = " << sum;


    return 0;
}