#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int tmp = n; //일단 tmp에 n을 저장해주기 
    
    int cnt = 0;
    int a = 1;
    int b = 2;
    while(tmp>1&&tmp>=b){                
        tmp = tmp - a;
        if(tmp%b == 0){
            cnt++;
            for(int i=0; i<a; i++){
                cout << (i+tmp/b) << " + ";
            }
            cout << (a+tmp/b) << " =  15" << endl;
        }
        a++;
        b++;
    }  
    cout << cnt;
    return 0;
}