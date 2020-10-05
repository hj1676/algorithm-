#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    freopen("input.txt","rt",stdin);
    int n,m;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    vector<int> c(n+m);
    int pos = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                c[pos++] = a[i];                            
                break;
            }
        }
    }
    int idx,tmp;
    for(int i=0; i<pos-1; i++){
        idx = i;
        for(int j=i+1; j<pos; j++){
            if(c[j]<c[idx])
            idx = j;
        }
        tmp = c[i];
        c[i] = c[idx];
        c[idx] = tmp;  //선택 정렬 ㅇㅇ
    }
    for(int i=0; i<pos; i++){
        cout << c[i] << " ";
    }


    return 0;
}