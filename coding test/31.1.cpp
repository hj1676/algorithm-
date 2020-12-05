#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    char input[4];
    freopen("input.txt","rt",stdin);
    cin >> input;
    int res = 0;
    if(input[1]>=48 && input[1]<=57){ //c 숫자 
        if(input[3]=='\0')
        res = 12*(input[1]-48);
        else
        res = 12*(input[1]-48)+(input[3]-48);
    }
    else //cH
    {
        if(input[2]=='\0')
        res = 13;
        else
        res = 12 + (input[2]-48);        
    }
    
    cout << res;



}