#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int s, n;
    freopen("input.txt","rt",stdin);
    cin >> s >> n;
    vector<int>cache(s+1,0);
    for(int i=1; i<=n; i++){
        int idx; 
        int num;
        cin >> num;
        int cnt = 0;
        for(int j=1; j<=s; j++){
            if(cache[j]==num){
            idx = j;
            cnt++;
            }
        }
        //새로운 것이 들어온 경우 
        if(cnt == 0){            
            for(int k=s; k>=2; k--){
                cache[k] = cache[k-1];                
            }
            cache[1] = num;            
        }
        //이미 있었던 것인 경우 
        else{
            for(int k=idx; k>=2; k--){
                cache[k] = cache[k-1];
            }
            cache[1] = num;
        }

        for(int i=1; i<=s; i++){
            cout << cache[i] << " ";
        }
        cout << endl;
    }



    return 0;
}
