//Print number from 1 to N By BackTracking

#include<iostream>
using namespace std;
int cnt =0;

int output(int cnt, int n){
    if(cnt >= n){
        return 0;
    }
    
    cnt++;
    output(cnt,n);

    cout<<cnt<<endl;
    
    

return 0;

}

int main(){
    output(0,100);
    return 0;
}