//가위 바위 보 알고리즘
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
    int num;
    cin >> num;
    int A[100];
    for(int i=0; i<num; i++){
        cin >> A[i];
    }
    int B[100];
    for(int i=0; i<num; i++){
        cin >> B[i];
    }
    for(int i=0; i<num; i++){
        if(A[i]== B[i])
        cout << "D"<<endl;
        else if((A[i]==1 && B[i]==3) || (A[i]==2 && B[i]==1) || (A[i]==3 && B[i]==2))
        cout <<"A"<<endl;
        else
        cout <<"B"<<endl;
    }
    
    return 0;
}