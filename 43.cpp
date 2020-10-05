//이분검색 응용 알고리즘 -> 결정 알고리즘 (좁혀나갈때 이분검색을 사용함)
#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
vector<int> dvd;
int n;


int Count(int s){ //핵심 알고리즘 코드
    int count = 1, sum = 0;
    for(int i=0; i<n; i++){
        if(sum+dvd[i]>s){ //넘을때 
            count++;
            sum = dvd[i];
        }
        else{
            sum+=dvd[i];
        }
    }
    return count;
}
int main(){ 
    freopen("input.txt","rt",stdin);
    int m,a,lt=1,rt=0,mid,answer,max=-1;
    cin >> n >> m;    
    
    for(int i=0; i<n; i++){       
        cin >> a;
        dvd.push_back(a);
        rt += a;
        if(a>max)
        max = a;
    }           
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(mid>max && Count(mid)<=m){
            answer = mid;
            rt = mid-1;
        }
        else{
            lt = mid+1;
        }
    }
    cout << answer;
    return 0;
}