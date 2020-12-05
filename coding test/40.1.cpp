//2중 for문 x , 투포인트 알고리즘 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    int n,m;
    cin >> n;
    vector<int>a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int>b(m+1);
    vector<int>c(n+m+1);
    for(int i=1; i<=m; i++){
        cin >> b[i];
    }
    int a_pos = 1, b_pos=1, c_pos=1;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while(a_pos<=n && b_pos<=m){
        //2 3 5 7 10 
        //3 5 10 12 17 
        if(a[a_pos]==b[b_pos]){ //딱 같을 경우 
            c[c_pos++] = a[a_pos++];
            b_pos++;
        }
        else if(a[a_pos]>b[b_pos]){ //a가 b보다 클경우 
            b_pos++;
        }
        else{ //b가 a보다 클 경우 
            a_pos++;
        }
    }
    for(int i=1; i<c_pos; i++){
        cout << c[i] << " ";
    }


    return 0;
}