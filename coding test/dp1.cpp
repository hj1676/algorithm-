//dp 1번 -> 네트워크 선 자르기(bottom-up) -> 점화식
//-> 직관적으로 알 수 있는 것은 초기화를 해놓고 시작하기 

//1,2로만 자르라고 했음!!
#include<iostream>
using namespace std;
int dy[50]; //다이나믹 배열 잡아주기 
int main(){
    ios_base::sync_with_stdio(false); //비동기화 해주고 
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    dy[1] = 1;
    dy[2] = 2;
    for(int i=3; i<=n; i++){
        dy[i] = dy[i-2] + dy[i-1];
    }

    cout << dy[n];
    return 0;
}

