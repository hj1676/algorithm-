#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int a,b;
    freopen("input.txt","rt",stdin);
    cin >> a >> b;
    int sum = 0;
    for(int i=a; i<b; i++){
        cout << i << " + ";
        sum += i;
    }
    cout << b << " = " << sum + b;



    return 0;
}