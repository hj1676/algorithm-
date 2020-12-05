#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    int a[n+1];
    int b[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    
    for(int i=1; i<=n; i++){
        cin >> b[i];
    }
    for(int i=1; i<=n; i++){
        if(a[i]==1){ //a가 가위 
            if(b[i]==2)
            cout << "B";
            else if(b[i]==1)
            cout << "D";
            else
            cout << "A";
        } 

        else if(a[i]==2){ //a가 바위
            if(b[i]==3)
            cout << "B";
            else if(b[i]==1)
            cout << "A";
            else
            cout << "D";
        }

        else{ //a가 보
            if(b[i]==3)
            cout << "D";
            else if(b[i]==1)
            cout << "B";
            else
            cout << "A";
        }
        cout << endl;
    }    
    return 0;
}
