//Print number from 1 to N By BackTracking

#include<iostream>
using namespace std;

int output(int n){
    if(n ==0){
        return 0;
    }

    return n + output(n-1);
}


int main(){
    cout<<output(5);
    return 0;
}