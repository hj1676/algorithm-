//가장 높은 탑 쌓기(LIS 응용)

//width가 큰 것 부터 쌓인다 
//weight가 큰 것 부터 쌓인다 
#include<iostream>
#include<vector>
using namespace std;

struct Block{
    int width;
    int height;
    int weight;
    Block(int wi, int he, int we){
        width = wi;
        height = he;
        weight = we;
    }
    bool operator<(const Block &a)const{
        return width > a.width;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    freopen("input.txt", "rt", stdin);
    cin >> n;
    vector<Block>blocks; // 어차피 push_back 해줘야 하니깐 그냥 크기를 정해주지는 말자 
    for(int i=1; i<=n; i++){
        int wi, he, we;                
        cin >> wi >> he >> we;
        blocks.push_back(Block(wi,he,we));
    }
    sort(blocks.begin(), blocks.end());    
    
    vector<int>dy(n);  //LIS를 응용할 dy 벡터 선언
    dy[0] = blocks[0].height;
    int res = 0;
    for(int i=0; i<blocks.size(); i++){
        int max = 0;
        for(int j= i-1; j>=0; j--){
            if(blocks[j].weight>blocks[i].weight && dy[j]>max)
            max = dy[j];                        
        }
        dy[i] = blocks[i].height + max;
        if(dy[i] > res)
        res = dy[i];
    }
    cout << res;
   

    return 0;
}