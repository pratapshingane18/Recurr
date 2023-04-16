//Print name N times

#include<iostream>
using namespace std;
int cnt =0;
int output(int n){
    if(cnt >= n){
        return 0;
    }
    cout<<"Prats"<<endl;
    cnt++;
    
    output(n);

return 0;

}

int main(){
    output(5);
    return 0;
}
