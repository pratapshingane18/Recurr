#include<iostream>
using namespace std;

int output(){
    cout<<"Recurrsion"<<endl;
    output();

return 0;

}

int main(){
    output();
    return 0;
}