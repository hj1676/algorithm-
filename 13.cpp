    #include<stdio.h>
    #include<iostream>
    using namespace std;
    int num[10]; // 배열은 앞으로 메인변수보다 먼저 선언하는 버릇을 들이자...
    int main(){
        freopen("input.txt", "rt", stdin);
        char a[101];
        
        cin >> a;
        int idx;
        for(int i=0; a[i]!='\0'; i++){
            idx = a[i]-48;
            num[idx]++;
        }
        int max = 0;
        int answer = 0;
        for(int i=0; i<10; i++){
            if(num[i]>=max){
                max = num[i];
                answer = i;
            }
        }
        for(int i=0; i<10; i++){
            cout << num[i]<<endl;
        }
        cout << answer;
        
        
        return 0;
    }