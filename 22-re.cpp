//온도의 최대값 ... 시간복잡도를 해결해주어야한다.
//배열 동적으로 잡아보기
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt", "rt",stdin) ;
    int n,k;
    cin >> n >> k;
    vector<int> temp(n); //동적으로 배열잡아주고 
    for(int i=0; i<n; i++){
        cin >> temp[i];        // input 넣어주고 
    }
    int sum = 0;
    int max = -1;
    for(int i=0; i<k; i++){ //첫번째 구간 일단 설정해놔주기
        sum += temp[i];
    }
    max = sum;
    for(int i=k; i<n; i++){ //이제 for문 돌리면서 1개 더해지면 그 k번째전 빼주는 식으로 값비교 가능..
        sum = sum+temp[i]-temp[i-k];
        if(sum > max)
        max = sum;    
    }
    cout << max;


    return 0;
}