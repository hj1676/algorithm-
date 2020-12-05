//컴파일 시간에 대한 부담은 덜어도 된다!!
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); //c++ 표준 프레임만 사용하겠다는 뜻, 속도가 확 빨라진다!  
    cin.tie(NULL); //untie 시켜주는 것 => 속도가 더 빨라짐 ㅇㅇ 
    freopen("input.txt","rt",stdin);
    //앞으로 동기화를 해제하고, cin cout을 쓰자 !!! 


    return 0;
}
