#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    char input[51];
    freopen("input.txt","rt",stdin);
    cin >> input;
    
    int res = 0;
    for(int i=0; input[i]!='\0'; i++){
        if(input[i]>=48 && input[i]<=57)
        res = res*10 +(input[i]-48); //이 스킬을 잊지말자... vector 쓸 필요가 애초에 없는 문제다!!
    }
    cout << res << endl;
    int cnt = 0;
    for(int i=1; i<=res; i++){
        if(res%i==0)
        cnt++;
    }
    cout << cnt;
    return 0;
}