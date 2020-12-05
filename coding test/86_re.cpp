//조합 DFS의 응용이다...
//피자
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> pizza;
vector<pair<int, int>> house;
vector<int> ch(20); //처음에 크기 초기화는 꼭 해주도록 하자 
int m,sum,dis;
int res = 2147000000;
void DFS(int s, int L){
    if(L==m){ //m개개 선택되었을때 
        sum = 0;
        for(int i=0; i<house.size(); i++){
            int x1 = house[i].first;
            int y1 = house[i].second;
            dis = 2147000000;
            for(int j=0; j<m; j++){
                int x2 = pizza[ch[j]].first;
                int y2 = pizza[ch[j]].second;                
                dis = min(dis, abs(x1-x2)+abs(y1-y2));
            }
            sum += dis;
        }
        if(sum < res)
        res = sum;                
    }        
    else{
        for(int i=s; i<pizza.size(); i++){            
            ch[L]=i;                        
            DFS(i+1,L+1);
        }
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    int n; //피자짓 m개를 선택하는 것이 어려우면서도 중요할듯 !
    cin >> n >> m;
    int a;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a;
            if (a== 1)
                house.push_back(make_pair(i, j)); //입력 배열에서 house 위치
            else if (a== 2) 
                pizza.push_back(make_pair(i, j)); //입력 배열에서 pizza 위치 
        }
    }
    DFS(0,0);
    cout << res;
    return 0;
}
