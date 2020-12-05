//napsack algoritm 냅색 알고리즘... 재밌네ㅎㅎ
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, total;
    freopen("input.txt","rt",stdin);
    cin >> n >> total;
    vector<int>dy(total+1,0); //dynamic 배열을 잡아주고.. dy 배열은 각 인덱스까지 담을 수 있는 최대 가치 , 우선 0으로 초기화 해주기     
    for(int i=1; i<=n; i++){      //n개 정보를 담아야 하니깐 
        int weight,value;  
        cin >> weight >> value;
        for(int j=weight; j<=total; j++){         
            dy[j] = max(dy[j],dy[j-weight]+value);  //기존 dy[j]와 dy[j-weight]+value 중 큰 것으로 바꿔주기   
        }
    }
    cout<<dy[total];

    return 0;
}