#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    char id[20];
    freopen("input.txt","rt",stdin);
    cin >> id; //char -> 그냥 받으면 된다 
    
    int age = 2020-1900-(id[0]-48)*10-(id[1]-48)+1;
    
    char sex;
    if(id[7]=='1' || id[7]=='3')
    sex = 'M';
    else
    sex = 'W';
    
    cout << age << " " << sex;




    return 0;
}