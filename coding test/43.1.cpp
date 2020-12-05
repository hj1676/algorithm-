#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> record(n + 1);
int Count(int x){
    int res = 1, sum = 0;
    for(int i=1; i<=n; i++){        
        sum += record[i];
        if(sum > x){
            res ++;
            sum = record[i];
        }        
    }
    return res;
}
int main(){    
    ios_base::sync_with_stdio(false);    
    freopen("input.txt","rt",stdin);
    cin >> n >> m;    
    int sum = 0;
    int max = -2147000000, res;
    for(int i=1; i<=n; i++){
        cin >> record[i];
        if(record[i]>max)
        max = record[i];         
        sum += record[i];
    }
    int left = 1;
    int right = sum;
    int mid;
   
    while(left<=right){
        mid = (left+right)/2;          
        if(mid>max && Count(mid)<=m){
            res = mid;
            right = mid-1;
        }       
        else{
            left = mid+1;
        }
    }
    cout << res;
    return 0;
}