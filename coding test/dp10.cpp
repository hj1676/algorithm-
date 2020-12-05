//냅색 알고리즘 응용 -> 동전교환 문제 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;    
    vector<int>coins(n);    
    for(int i=1; i<=n; i++){
        cin >> coins[i];        
    }    
    int total;
    cin >> total;
    vector<int> dy(total+1,1000); //dynamic 배열 선언  dy[j] : j원을 거슬러주는데 사용되는 동전의 최소 개수     
    dy[0] = 0;
    //1,2,5   total : 15,
    for(int i=1; i<=n; i++){
        for(int j=coins[i]; j<=total; j++){
            dy[j] = min(dy[j],dy[j-coins[i]]+1);                        
        }                
    }
    cout << dy[total];

    return 0;
}