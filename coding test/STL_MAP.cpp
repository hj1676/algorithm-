//map 자료구조 활용 

#include<iostream>
#include<fstream>
#include<map>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);    //동기화 해재헤서 cout의 속도를 빠르게 하기 
    ifstream cin;    
    cin.open("input.txt");

    map<string,int>ch;
    map<string,int>::iterator it; //map에서 접근할려면 it무조건 선언해야함
    char a[100];            
    int n; 
    cin >> n;        
    for(int i=1; i<=n; i++){
        cin >> a;                
        ch[a]++;
    }    
    int max = 0;
    string res;    

    for(it = ch.begin(); it!=ch.end(); it++){
        if(it->second > max){
        max = it -> second;  
        res = it -> first;
        }      
    }
    cout << max << "\n" << res;

    return 0;
}