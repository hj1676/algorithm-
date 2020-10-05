//나이 차이
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("input.txt");
    int a,testcases = 0;
    int max=0;
    int min=10000;
    fin >> testcases;
    for(int i=0; i<testcases; i++){
        fin >> a;
        if(a>max)
        max = a;
        if(a<min)
        min = a;
    }

    //굳이 배열을 만들어줄 필요가 없네..시간낭비다!
    // //max는 가장 작은 것으로 min은 가장 큰것으로초기화 해주기
    // int min,max = ages[0];
    // for(int i=1; i<testcases; i++){        
    //     if(ages[i]>max)
    //     max = ages[i]; 

    //     if(ages[i]<min)
    //     min = ages[i];  

    // }
    cout << max << endl;
    cout << min << endl;
    cout << max-min;

    return 0;
}