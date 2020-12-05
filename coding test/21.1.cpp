#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    freopen("in5.txt","rt",stdin);
    int a[11];
    int b[11];
    
    for(int i=1; i<=10; i++){
        cin >> a[i];
    }
    for(int i=1; i<=10; i++){
        cin >> b[i];
    }

    int a_score = 0, b_score = 0, a_last = 0, b_last = 0;
    for(int i=1; i<=10; i++){
        if(a[i]>b[i]){
        a_score += 3;
        a_last = i;
        }
        else if(a[i]<b[i]){
            b_score += 3;
            b_last =  i;
        }
        else
        {
            a_score +=1;
            b_score +=1;
        }
    }

    cout << a_score << " " << b_score << endl;
    if(a_score > b_score)
    cout << "A";
    else if(a_score == b_score){
        if(a_last > b_last)
        cout << "A";
        else if(b_last > a_last)
        cout << "B";        
        else
        cout << "D";
    }
    else
    cout << "B";
    return 0;
}