//선택 정렬 응용
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> score(n);
    for(int i=0; i<n; i++){
        cin >> score[i];
    }
    
    int idx,tmp;
    for(int i=0; i<n-1; i++){        
        idx = i;
        for(int j=i+1; j<n; j++){
            if(score[j]>score[idx])
            idx=j;                            
        }        
        tmp = score[i];
        score[i] = score[idx];
        score[idx] = tmp;
    }
    
    int count = 1;
    for(int i=0; i<n-1; i++){
        if(score[i]!=score[i+1]){
            count++;
        }
        if(count==3){
            cout << score[i+1];
            break;
        }
    }
    

    return 0;
}