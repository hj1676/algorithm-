#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n,k,pos=0,count=0;
    cin >> n;
    int arr[1001];
    for (int i=1; i<=n; i++)
    {
        arr[i] = i;
    } //arr에 일단 1~n까지 다입력받기    
    cin >> k; //k번째 입력받기    
    int tmp = n;

    while(1){
        pos++;
        if(pos>n) pos=1;
        if(arr[pos]==0)
        continue;                                     
        count++;
        if(count==3){
        arr[pos]=0;
        tmp--;        
        count = 0;
        }
        if(tmp==1)
        break;
    }
    for(int i=1; i<=n; i++){
        if(arr[i]!=0)
        cout << arr[i];
    }
    return 0;
}