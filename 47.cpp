//방향 배열 사용해주기 
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<vector<int>>a(n+2,vector<int>(n+2));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];         
        }        
    }
    //a[i][j]기준으로 a[i-1][j] a[i+1][j] a[i][j-1] a[i][j+1] 비교를 해야 한다.

    int p[4]={-1,1,0,0};    
    int q[4]={0,0,-1,1};
    
    
    int count = 0;
    for(int i=1; i<=n; i++){        
        for(int j=1; j<=n; j++){
            int flag = 1;
            for(int k=0; k<4; k++){
                if(a[i+p[k]][j+q[k]] >= a[i][j]){
                    flag= -1;
                    break;            
                }                                                                                        
            }
            if(flag==1)
            count ++;
            
        }
    }
    cout << count;

    return 0;
}
