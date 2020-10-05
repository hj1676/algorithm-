//영어 단어 복구 이것 또한 아스키 문제네 시발
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin); //앞으로 그냥 이형식을 사용하자!!!!
    //영어 단어의 길이는 100이다
    char word[100];
    //cin으로는 띄어쓰기 되어있으면 읽을수가 없다. gets로 읽어야한다.
    gets(word);
    char result[100];
    int j=0;
    for(int i=0; word[i]!='\0'; i++){
        if(word[i]!=' '){
        if(word[i]>=65 && word[i]<=90){
            result[j] = word[i]+32;
            j++;
        }
        else{
            result[j] = word[i];
            j++;
        }
        }
    }
    result[j] = '\0';
    cout << result;

        //48-57 0-9 65-90 A-Z  97-122 a-z 이정도 아스키 코드는 외워두자
        //freopen("input.txt", "rt", stdin);
    
    
    
    

    return 0;
}