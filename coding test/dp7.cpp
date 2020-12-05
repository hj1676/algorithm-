//알리바바와 40인의 도둑(bottom-up)
//애초에 우선순위큐를 이용한방법이 맞지 않는 것 같다...(같은 경우가 있을수 있으니깐..)

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n;
vector<vector<int>> arr(21,vector<int>(21, 0)); //이차원 벡터 생성방법 까먹지 말기
struct Point{
    int x;
    int y;
    int weight;
    Point(int a, int b){
        x = a;
        y = b; 
        weight = arr[a][b];
    }
    bool operator<(const Point &aa)const{
        return aa.weight < weight;
    }        
};

int main(){
    ios_base::sync_with_stdio(false);
    freopen("in2.txt","rt",stdin);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
        }
    }    
    int dx[2]={1,0};
    int dy[2]={0,1};
    priority_queue<Point>PQ;
    PQ.push(Point(1,1));    
    int res = 0;
    while(!PQ.empty()){        
        Point tmp = PQ.top();        
        res+= tmp.weight;
        if(tmp.x==n&&tmp.y==n)
        break;
        
        while(!PQ.empty()){
        PQ.pop();
        }

        for(int i=0; i<2; i++){
            if (tmp.x+dx[i]>=1&&tmp.x+dx[i]<=n&&tmp.y+dy[i]>=1&&tmp.y+dy[i]<=n)
            {
                PQ.push(Point(tmp.x+dx[i],tmp.y+dy[i]));                
            }
        }
    }
    cout << res;
    return 0;
}