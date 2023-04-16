//Print number from 1 to N By BackTracking

#include<iostream>
using namespace std;
int cnt =0;
int ans =0;
int output(int n){
    
if(cnt > n){
    return 0;
}
    ans += cnt;

    cnt++;

    output(n);
    
   
return ans;

}

int main(){
    cout<<output(10);
    return 0;
}