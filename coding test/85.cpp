//수식 만들기 (삼성 SW역량 기출 :DFS 활용)
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int arr[101];
int p,q,r,s;
int n;
int maxx = -2147000000;
int minn = 2147000000;

void DFS(int x, int sum){
    if(x==n){ 
        cout << sum<<endl;        
        if(sum>maxx)                   
        maxx=sum;
        if(sum<minn)
        minn=sum;        
        return;
    }                    
    else{
        if(p>0){
            p--;
            DFS(x+1,sum+arr[x+1]);
            p++;
        }
        if(q>0){
            q--;
            DFS(x+1, sum-arr[x+1]);
            q++;
        }
        if(r>0){
            r--;
            DFS(x+1, sum*arr[x+1]);
            r++;
        }
        if(s>0){
            s--;
            DFS(x+1, sum/arr[x+1]);
            s++;
        }
    }
}

int main(){
    freopen("input.txt","rt",stdin);           
    cin >> n; //숫자 n 받기 
    for(int i=1; i<=n; i++){
        cin >> arr[i];       // 5, 3, 8  arr배열에 받기 
    }
    cin >> p >> q >> r >> s; //연산자 개수 받기 
    DFS(1,arr[1]);
   
    cout << maxx<<endl;
    cout << minn<<endl;
}



