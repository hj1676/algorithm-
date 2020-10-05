//각행의 평균과 가장 가까운 값 
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    freopen("input.txt","rt",stdin);
    vector<vector<int>> a(9,vector<int>(9));
    //2차원 벡터 하나만 만들면 된다.
    int avg = 0;
    for(int i=0; i<9; i++){
        int sum = 0;
        for(int j=0; j<9; j++){
            cin >> a[i][j];
            sum += a[i][j];                        
        }        
        //sum/9.0으로 하면 실수형으로 나오게 되고 그걸 0.5더하면 반올림된 int값이 avg에 저장된다.
        avg = sum /9.0 + 0.5;            
        cout << avg << " ";
        int min = 100;
        int result;
        int tmp;
        for(int j=0; j<9; j++){
            tmp = abs(a[i][j]-avg);
            if(tmp<min){
            min = tmp;
            result = a[i][j];
            }
            else if(tmp==min){
                if(a[i][j]>result)
                result = a[i][j];
            }
        }
        cout << result;  
        cout << endl;
    }
        
    return 0;
}