#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int count = 0;    
    for(int i= n/2+1; i>=1; i--){
        int tmp = i;
        int sum = 0;        
        while(tmp>=0){
            sum += tmp;
            if(sum==n){
                for(int j=tmp; j<i; j++){
                    cout << j << " + ";
                }
                cout << i << " = " << n << endl;
                count++;
                break;
            }
            tmp --;
        }
        
    }
    cout << count;
    return 0;
}