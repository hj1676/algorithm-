#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    freopen("input.txt","rt",stdin);
    cin >> n >> k;
    vector<int>input(n+1);
    for(int i=1; i<=n; i++){
        cin >> input[i];
    }

    int sum = 0;
    for(int i=1; i<=k-1; i++){
        sum += input[i];
    }
    int max = sum;
    //1,2,3 4,5,6
    for(int i=k; i<=n; i++){
        sum-= input[i-k];
        sum+= input[i];
        if(sum > max)
        max = sum;
    }


    cout << max;



    return 0;
}