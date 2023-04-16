#include<iostream>
using namespace std;

int cnt =0;

int count(){
    if(cnt > 100){
        return 0;
    }
    cout<<cnt<<endl;
    cnt += 2;

    count();

    cout<<"Successfully done"<<endl;

return 0;

}

int main(){
    count();
    return 0;
}

// Output:

// Infinite times Recurrsion will be return