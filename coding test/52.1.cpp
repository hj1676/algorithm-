#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<int>res(n+1);
    res[1]= 1;        
    int pos_2=1, pos_3=1, pos_5=1;
    int min;

    for(int i=2; i<=n; i++){
        if(2*res[pos_2]<3*res[pos_3])
        min = 2*res[pos_2];                
        else                
        min = 3*res[pos_3];        

        if(5*res[pos_5]<min)
        min = 5*res[pos_5];

        if(min==2*res[pos_2])
        pos_2++;
        if(min==3*res[pos_3])
        pos_3++;
        if(min==5*res[pos_5])
        pos_5++;
        
        res[i] = min;
    }
    cout << res[n];

    return 0;
}