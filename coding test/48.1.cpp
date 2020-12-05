#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    vector<vector<int>>map(10,vector<int>(10,0));
    for(int i=1; i<=9; i++){
        int sum = 0, avg = 0;
        for(int j=1; j<=9; j++){
            cin >> map[i][j];
            sum += map[i][j];
        }
        avg = sum / 9.0 + 0.5;        
        int min = 2147000000,res;        
        for(int j=1; j<=9; j++){
            if(abs(map[i][j]-avg)<min){
            min = abs(map[i][j]-avg);
            res = map[i][j];
            }
        }
        cout << avg << " " << res << endl;
    }




    return 0;
}