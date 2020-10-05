//버블정렬..bubble bubble pop pop!!
// 버블 정렬 n-1번 동안 반복문 돌리는거 
// 1번마다는 두수를 계속 비교  1.2  2.3 3.4 ....
//버블 정렬 -> swap 계속 하기 때문에 시간복잡도가 높은 정렬방식임
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> bubble(n);
    for(int i=0; i<n; i++){
        cin >> bubble[i];
    }
    int tmp;
    int idx;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){    
            if(bubble[j]>bubble[j+1]){
                tmp = bubble[j];
                bubble[j] = bubble[j+1];
                bubble[j+1] = tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << bubble[i] << " ";
    }



    return 0;
}