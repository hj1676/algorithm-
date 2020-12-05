#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    char words[101];
    freopen("input.txt","rt",stdin);
    gets(words); //gets 까먹지 말기..공백있었을때는 gets로 받아야한다.
    char res[101];
    int j = 0;
    for(int i=0; words[i]!='\0'; i++){
        if(words[i]!=' '){
            if(words[i]>=65 && words[i]<=90)
            res[j] = words[i]+32;
            else
            res[j] =  words[i];
            j++;
        }
    }
    res[j] = '\0'; //마지막 문자를 나타내는 것 
    cout << res;
    
    return 0;
}


//대문자 65-90 소문자 97-122
//48~57 숫자 0~9
//-48 숫자 변형 
