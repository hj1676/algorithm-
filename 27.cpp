//꽤나 어렵네...
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> check(n);
    //각각 숫자마다 인수분해해서 배열마다 카운트를 증가시켜야한다.. 카운트가 1이상인것들만 출력(1은 제외 되어야함)
    for(int i=2; i<=n; i++){     
        int tmp = i;      // 2 3 4 5 
        int j=2;
        while(tmp>1){
            if(tmp%j==0){
                check[j]++;
                tmp = tmp/j;
            }
            else
                j++;
        }        
    }   
    cout << n << "!" << " = ";
    for(int i=2; i<=n; i++){
        if(check[i]!=0)    
        cout << check[i] << " ";
    }
                    
    return 0;
}