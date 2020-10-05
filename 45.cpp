//완벽하다..
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int arr[1001];  
    for(int i=0; i<n; i++){
        arr[i] = i+1;        
    }//arr에 일단 1~n까지 다입력받기  
    int k;
    cin >> k; //k번째 입력받기 

    int tmp = n; //tmp에 n의 개수를 임시로 저장해준다.             
    
    int i = 0;
    int count = 0;
    while(true){
        if(i>n-1)
        i=0;
        if(arr[i]!=0)            
        count ++;
        if(count == k){
            tmp --;
            arr[i] = 0;
            count = 0;
        }                                                        
        //최종적으로 1개만 남았다 하면 출력 
        if(tmp == 1)
        break;      
              
        i++;
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=0)
        cout<<arr[i];
    }
    return 0;
}