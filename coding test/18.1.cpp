#include<iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    int time = 0;    
    int max = -2147000000;
    for(int i=1; i<=n; i++){        
        int weight;
        cin >> weight;
        if(weight > m)
        time++;
        else
        time = 0;        
        if(time > max)
        max = time;
    }
    cout << max;


    return 0;
}
