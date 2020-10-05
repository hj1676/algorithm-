//나이계산
//주민등록번호 판별해서 나이와(2020년기준) + 남자인지여자인지판별(1,3 -> 남자  / 2, 4 -> 여자)
//character 배열에 넣고 뒷자리 앞자리 숫자로 구별 1,2->1900년대 3,4 -> 2000년대

#include<iostream>
using namespace std;
int main(){
    int birthyear,age;
    char sex;
    char id[20];
    cin >> id;
    //1900년대생
    if(id[7]=='1' || id[7]=='2'){
        birthyear = 1900 + (id[0]-48)*10 + (id[1]-48);        
        //문자 *10 은 숫자가 안나온다.. 이것떄문에 오류가 생긴것
        // 아스키 코드 -48 해줘야한다 
        age = 2020-birthyear+1;
        if(id[7]=='1')
            sex = 'M';
        else
            sex = 'W';

    }
    //2000년대생
    else{
        birthyear = 2000 + (id[0]-48)*10 + (id[1]-48);
        age = 2020-birthyear +1;
        if(id[7]=='3')
            sex = 'M';
        else
            sex = 'W';
        

    }    
    
    cout << age << " " << sex;    
    

    return 0;
}