#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //2의 개수 5의 개수 
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;    
    int count_2=0, count_5 = 0;    
    for(int i=2; i<=n; i++){
        int tmp = i;
        while(tmp>1){
            if(tmp%2==0){
                tmp = tmp / 2;
                count_2 ++;
            }            
            else if(tmp%5==0){
                tmp = tmp / 5;
                count_5 ++;
            }
            else
            break;            
        }
    }
    cout << min(count_2, count_5);
    



    return 0;
}
