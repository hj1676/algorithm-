#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int s,n,num;    
    cin >> s >> n;
    vector<int>cache(s);        

    for(int i=0; i<n; i++){
        int pos = -1;
        cin >> num;         
        for(int j=0; j<s; j++){
            if(cache[j]==num)
            pos = j;
        }
        //miss일 경우
        if(pos == -1){
            for(int j=s-1; j>0; j--){
                cache[j] = cache[j-1];
            }            
        }
        //hit일 경우
        else{
            for(int j=pos; j>0; j--){
                cache[j] = cache[j-1];
            }            
        }
        cache[0] = num;
                        
        //출력 파트 
        for(int j=0; j<s; j++){
            cout << cache[j] << " ";
        }
        cout << endl;        
    }
    return 0;
}