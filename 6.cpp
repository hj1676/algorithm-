//6번.숫자만추출(문자열 컨트롤 / 아마존 인터뷰)

#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("input.txt");        
    char a[100];
    int result = 0;
    int count = 0;
    fin >> a;                
    for(int i=0; a[i]!='\0'; i++){  //'\0' 은 string의 마지막
        if(a[i]>=48 && a[i]<=57){//아스키 코드 번호 48~57           
            result = result*10+(a[i]-48);   //char형에서 int형으로 변환, 아스키 번호 48을 뺴주면 된다.
        } 
    }
    for(int i=1; i<=result; i++){
        if(result%i == 0)
        count++;
    }
    cout << result << endl;
    cout << count;

    //str배열에서 028 숫자불러온다고 해도 이거로 어떻게 자연수를 만들지...?
    //숫자 있을 때 자르기... 제일 앞자리 0은 무시해주기 



    return 0;
}