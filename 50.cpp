#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int p,q;
    cin >> p >> q; 
    vector<vector<int>> a(p,vector<int>(q,0));
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin >> a[i][j];            
        }        
    }
    int h,w;
    cin >> h >> w;    

    int m,n,sum= 0;
    int max = -1;    
    while(m<=p-h){          //4중 for문이나 2개 while문 쓰나 ㄱㅊ                   
        while(n<=q-w){
        for(int x=m; x<m+h; x++){                                            
            for(int y=n; y<n+w; y++){
                sum += a[x][y];                                                      
            }            
        }
        if(sum > max)
        max = sum;                
        sum = 0;
        n++;        
        }  
        n = 0;                                                                
        m++;
       
    }
    cout << max;
                               
        
    return 0;
}