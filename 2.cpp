//자연수의 합 
#include<iostream>
using namespace std;
int main(){
    int a,b,sum= 0; //초기화까지 일단 해놓자
    cin >> a >> b; //a와 b를 입력받고
    for(int i = a; i <=b; i++){
        cout << i;
        sum += i; 
        if(i==b)       
        break;
        cout << "+";
    }
    cout << "=" << sum << endl;
    return 0;
}