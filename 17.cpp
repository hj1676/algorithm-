// 선생님 퀴즈
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);    
    int testcases;
    cin >> testcases;
    for(int i=0; i<testcases; i++){
        int num, ans;
        cin >> num >> ans;
        int sum = 0;
        for(int j=1; j<=num; j++){
            sum += j;
        }
        if (sum == ans)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }


    return 0;
}