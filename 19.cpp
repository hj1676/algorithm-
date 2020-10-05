//분노 유발자
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int testcases;
    cin >> testcases;
    int row[101];
    for(int i=0; i<testcases; i++){
        cin >> row[i];
    }

    int count = 0;
    int max = row[testcases];
    for(int i=testcases-2; i>=0; i--){
        if(row[i]>max){
            max = row[i];
            count++;
        }
    }
    cout << count;
    // int ans = 0;
    // for(int i=0; i<testcases-1; i++){
    //     int count = 0;
    //     for(int j=i+1; j<testcases; j++){
    //         if(row[j]>=row[i]){
    //             count+=1;
    //             break;
    //         }
            
    //     }
    //     if(count==0)
    //     ans++;
    // }
    // cout << ans;

    //2중 for문 안쓸수 있는 생각을 해보자..


    return 0;
}
