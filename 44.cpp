 //이분검색 결정알고리즘 활용 -> 마구간 정하기 
 //43번과 매우 유사한 문제이다. 

 //후 잘했다!!! 이제 이문제는 손쉽게 풀수있겟군
 #include<stdio.h>
 #include<algorithm>
 #include<iostream>
 #include<vector>
 using namespace std;
 int n;
 vector<int> mal;    
 int Count(int s){
     int count = 1; //처음거는 무조건 먹는 거로 잡자 
     int sum = 0; //sum은 0으로 초기화해주기 
     for(int i=0; i<n-1; i++){         
         int width = mal[i+1]-mal[i];                  
         if(sum + width >= s){
             sum = 0;
             count ++;
         }
         else{
             sum += width;
         }
     }
     return count;
 }
 int main(){
     freopen("in5.txt","rt",stdin);
     int c;
     cin >> n >> c; //c는 말의 개수      
     for(int i=0; i<n; i++){
         int a;
         cin >> a;
         mal.push_back(a); //입력받기 
     }
     sort(mal.begin(), mal.end());//받은 배열 정렬해주기 
     int left = 1; //left는 1 
     int right = mal[n-1]; //right는 9
     int mid;
     int answer; //출력할 answer
     while(left<=right){         
         mid = (left+right)/2;
         if(Count(mid)>=c &&mid>=1){ //많이나왔을 겨우 
             answer = mid;                          
             left = mid+1; // mid를 높여줄 필요가 있음                         
         }
         else{//원하는 말 개수가 나오지 않았을 경우 (적게 나왔을 때는 간격을 좁혀줘야한다.)
             right = mid-1;
         }
     }
    cout << answer;


     return 0;
 }