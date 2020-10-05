//special sort(구글 인터뷰)
// 선택정렬 사용 불가 -> 끊임없이 비교를 해야 하므로 bubble sort를 사용해야 한다. 



#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0; i<n; i++){
        cin >> num[i];
    }//입력 마무리

    int tmp;
    for(int i=0; i<n-1; i++){
        //선택정렬 아니제.. bubble sort지
        for(int j=0; j<n-i-1; j++){            
            if(num[j]>0&&num[j+1]<0){
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }                                                
        }
    }

    // 출력 파트 
    for(int i=0; i<n; i++){
        cout << num[i] << " ";
    }





    





    return 0;
}