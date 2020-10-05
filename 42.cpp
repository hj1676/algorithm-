//이분 검색 -> 두개의 포인터가 필요 lt와 rt 
//찾고자 하는 데이터의 범위를 계속해서 줄여나간다...
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n;
    cin >> n;
    int num;
    cin >> num;
    vector<int> a;
    int tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        a.push_back(tmp);
    } //벡터는 이렇게 집어넣는다.

    //벡터의 sorting 파트 
    sort(a.begin(),a.end());
    int lt = 0, rt = n-1;
    while(lt<=rt){
        int mid = (lt+rt)/2;
        if(a[mid]==num){
            cout << mid+1;
            break;
        }
        else if(a[mid]>num){
            rt = mid-1;
        }
        else
        lt = mid+1;
        
    }
    return 0;
}
