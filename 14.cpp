//뒤집은 소수  입력받은 수를 역순으로 만들어주고, 소수이면 그 뒤집어준 숫자를 출력해주기
// 0이 들어가는 것 주의해주기


#include<iostream>
#include<cstdlib>
using namespace std;

//reverse 함수  , 함수를 main 위에 만들면 선언해줄 필요없으므로 main 위에 만들어주자.. 
//예를 520이라고 하면 
int reverse(int x){
    int res = 0;
    int tmp; 
    while(x>0){
        tmp = x%10; //tmp가 0이나오면 2 5 
        res = res*10+tmp; // res는 0이 되겟고 res가 
        x = x/10;//x가 52  //x가 5  -> 와 ㄹㅇ 이렇게 생각할수 있는 센스를 길러야 한다...
    }
    return res;   
}
bool isPrime(int x){
    if(x==1) return false;
    bool flag = true; //초기값을 flag로 설정해준다. 
    for(int i=2; i<x; i++){
        if(x%i == 0){
        flag = false;
        break;
        }
    }
    return flag;
}



int main(){
    
    freopen("input.txt","rt",stdin);
    int testcases,num,tmp;
    cin >> testcases;
    for(int i=0; i<testcases; i++){
        cin >> num;        
        tmp = reverse(num); //역수로 만들어주기 완료 되었음
        // cout << tmp;
        if(isPrime(tmp))
        cout << tmp << " ";
    }
    return 0;
}