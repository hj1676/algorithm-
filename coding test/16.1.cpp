#include<iostream>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    char a[101];
    char b[101];
    freopen("in5.txt","rt",stdin);
    cin >> a;
    cin >> b; 
    char res1[123]={0,};
    char res2[123]={0,};
    for(int i=0; a[i]!='\0'; i++){
        res1[a[i]]++;
    }
    for(int i=0; b[i]!='\0'; i++){
        res2[b[i]]++;
    }    
    bool flag = true;
    for(int i=0; i<123; i++){
        if(res1[i]!= res2[i]){
        flag = false;
        break;
        }
    }
    if(flag==true)
    cout << "YES";
    else
    cout << "NO";

    return 0;
}