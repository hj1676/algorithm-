#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);    
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int num, ans;
        cin >> num >> ans;
        int sum = 0;
        for(int i=1; i<=num; i++){
            sum += i;
        }
        if(sum==ans)
        cout << "YES";
        else
        cout << "NO";
        cout << endl;
    }
    return 0;
}