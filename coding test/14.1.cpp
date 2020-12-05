#include<iostream>
using namespace std;


int reverse(int x){
    int res = 0;    
    while(x>0){
        res = res*10 + x%10 ;
        x = x/10;                        
    }
    return res;
}

bool isPrime(int x){
    bool flag = true;
    for(int i=2; i<x; i++){
        if(x%i == 0){
        flag = false;
        break;
        }
    }
    return flag;
}
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    for(int i=1; i<=n; i++){
        int num;
        cin >> num;       
        int reversed = reverse(num);
        if(isPrime(reversed)==true)
        cout << reversed << " ";
        
     
    }
    return 0;
}