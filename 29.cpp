//무한루프 도는거냐 -> 해결완료.. 교훈 i 직접 건드리지말고 temp 변수 써라 
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int count = 0;
    int temp;
    for(int i=1; i<=n; i++){
        temp = i;
        while(temp>0){
            if(temp%10==3)   
            count++;
            temp = temp/10;
        }
    }
    cout << count << endl;


    return 0;
}
