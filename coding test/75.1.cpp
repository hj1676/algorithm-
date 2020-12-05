#include<iostream>
#include<queue>
#include<vector>
using namespace std;


struct lecture{
    int money;
    int day;
    lecture(int x, int y){
        money = x;
        day = y;
    }
    bool operator<(const lecture &aa)const{
        return day > aa.day;
    }
};

int main(){
    ios_base::sync_with_stdio(false);    
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    priority_queue<int>PQ;
    vector<lecture>vec;
    int max = -2147000000;
    for(int i=1; i<=n; i++){
        int a,b;
        cin >> a >> b;
        if(b>max)
        max = b;
        vec.push_back(lecture(a,b));
    }
    sort(vec.begin(), vec.end()); 
    int j = 0,res=0;
    for(int i=max; i>=1; i--){
        for(; j<n; j++){
            if(vec[j].day<i)
            break;
            PQ.push(vec[j].money);
        }
        if(!PQ.empty()){
            res+=PQ.top();
            PQ.pop();
        }
    }
    cout << res;

    return 0;
}