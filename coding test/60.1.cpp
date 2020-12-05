#include<iostream>
#include<vector>
using namespace std;
int n, total=0;
vector<int>arr(n+1);
bool flag = false;
void DFS(int x, int sum){    
    if(sum > (total/2))
    return;
    if(flag == true)
    return;
    
    if(x>n){
        cout << sum << endl;
        if(sum==total/2)
        flag = true;
        return;

    }
    else{           
        DFS(x+1,sum+arr[x]);        
        DFS(x+1,sum);
    }
}


int main(){
    ios_base::sync_with_stdio(false);    
    freopen("input.txt","rt",stdin);
    cin >> n;    
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        total += arr[i];
    }
    DFS(1,0);
    if(flag==true)
    cout << "YES";
    else
    cout << "NO";
    
    return 0;
}