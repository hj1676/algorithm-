#include<iostream>
#include<vector>
using namespace std;

int main(){    
    ios_base::sync_with_stdio(false);
    int h,w;
    freopen("input.txt","rt",stdin);
    cin >> h >> w;
    vector<vector<int>>map(h+1,vector<int>(w+1,0));
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin >> map[i][j];
        }
    }
    int a, b;
    cin >> a >> b;
    
    int i=1,j=1;
    int max = -214700000, sum=0;
    while(i<=h-a+1){
        while(j<=w-b+1){
            
            for(int p=i; p<=i+a-1; p++){
                for(int q=j; q<=j+b-1; q++){
                  sum+=map[p][q];
                }
            }
            if(sum>max)
            max = sum;
            sum = 0;
            j++; 
        } 
        j=1;       
        i++;
    }
    
    cout << max;
    return 0;
}