#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
    int a[10];
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    int b[10];
    for(int i=0; i<10; i++){
        cin >> b[i];
    }

    char res[10];
    int a_res = 0;
    int b_res = 0;
    int flag = 0;
    //한개의 변수 값에 따라 마지막 누가 이겼는지 상태판단하자 
    for(int i=0; i<10; i++){
        if(a[i]>b[i]){            
            a_res += 3;   
            flag = 1;
        }
        
        else if(a[i]<b[i]){            
            b_res += 3;
            flag = 2;
        }
        
        else{            
            a_res+=1;
            b_res+=1;
        }
        
    }
    cout << a_res << " "<<b_res<<endl;
    if(a_res > b_res)
    cout << "A";
    else if(b_res > a_res)
    cout << "B";
    else{    
        if(flag==0)    
        cout << "D";
        
        else if(flag==1)
        cout << "A";
        else
        cout << "B";

    }
    return 0;
}