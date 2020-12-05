#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    int max = -2147000000;
    int min = 2147000000;
    for(int i=1; i<=n; i++){
        int age;
        cin >> age;
        if(age>max)
        max= age;
        if(age<min)
        min = age;
    }
    cout << max - min;


    return 0;
}