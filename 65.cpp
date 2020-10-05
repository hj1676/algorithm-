//미로탐색(DFS) 64번과 거의 일치하다고 볼 수 있다.
#include<iostream>
#include<algorithm>
using namespace std;
int check[8][8], arr[8][8],cnt=0;
int x[4] = {0, 1, 0, -1};
int y[4] = {-1, 0, 1, 0};

void DFS(int a, int b){
    int aa,bb;
    if(a==7 && b==7)
    cnt++;

    else{        
        for(int i=0; i<4; i++){
            aa= a+x[i];
            bb= b+y[i];
            if(aa<1||aa>7||bb<1||bb>7)
            continue; //이거 중요... 빠져나가는 것 생각해주어야 한다. 
            if(arr[aa][bb]==0 && check[aa][bb]==0 ){
                check[aa][bb] = 1;
                DFS(aa,bb);
                check[aa][bb] = 0;
            }                                    
        }

    }

}


int main(){
    freopen("input.txt","rt",stdin);
    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            cin >> arr[i][j];
        }
    }
    check[1][1]=1;
    DFS(1,1);

    cout << cnt;


    return 0;
}