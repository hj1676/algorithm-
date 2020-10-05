#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    freopen("in5.txt", "rt" ,stdin);
    int n,k,i,p=0,count=0,total=0;
    cin >> n;    
    int work[2001];
    for(int i=1; i<=n; i++){
        cin >> work[i];        
        total+=work[i];
    }    
    cin >> k; //정전되는 초;            
    if(k>=total){ //만약 초가 전체 작업수와 같거나 크면 무조건 다 끝나므로 -1 출력하고 종료 
        cout << "-1";
        return 0;
    }

    //아닌 경우에 
    while(1){
        p++; //위치 가르키는 p++ 1부터시작
        if(p>n) p=1; //작업이 n보다커지면 1로 초기화
        if(work[p]==0) continue; //0번이면 무시하고 그냥 진행
        work[p]--;      
        count++;//초가 증가됨 
        if(count==k) break; //p지점에서 작업끝나게 됨 
    }
    while(1){
        p++;
        if(p>n) p=1;
        if(work[p]!=0) //최초로 0이 아닌 작업 만날때 break
        break;
    }
    cout << p;
    return 0; 
}