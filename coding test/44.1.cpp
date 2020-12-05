#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, c;
vector<int> map;
int Count(int x){
    int cnt = 1;
    int sum = 0; 
    for(int i=0; i<n-1; i++){
        int width = map[i+1]-map[i];
        if(sum+width >= x){
            sum = 0;
            cnt++;
        }
        else{
            sum += width;
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    cin >> n >> c;
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        map.push_back(a);
    }
    sort(map.begin(), map.end());
    //1 2 4 8 9 
    int left = 1;
    int right = map[n-1];
    int mid;
    int res;
    while(left<=right){        
        mid = (left+right)/2;        
        if(Count(mid)>=c && mid>=1){
            res = mid;
            left = mid+1;            
        }
        else{
        right = mid-1;   
        }
    }
    cout << res;
    return 0;
}