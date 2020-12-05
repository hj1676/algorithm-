//시간을 줄일 필요성
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int num;
    freopen("input.txt","rt",stdin);
    cin >> num;
    int sum = 0, a = 9, n=1, b=0;

    while(num>a+b){
        sum = sum + a*n;                
        b = b+a; 
        a = a*10;        
        n = n+1;
    }    
    sum = sum + (num-b)*n;
    cout << sum;


    return 0;
}