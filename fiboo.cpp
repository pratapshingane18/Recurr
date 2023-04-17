// Complexity in case of Fibonacchi using Recurrsion - O(2^n)
// Iteration- O(n) but we can also do it in O(1)

#include<iostream>
using namespace std;

int fiboo(int n){
    //Base condition as f(0) =0, f(1) = 1;
    if(n <=1){
        return n;
    }
    // vaue if fibooo number is addn of last 2 previous value of fiboo sequence..
    return fiboo(n-1) + fiboo(n-2);
}

int main(){
    int n =25;

    cout<<fiboo(n);
    return 0;

}