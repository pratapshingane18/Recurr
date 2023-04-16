// Infinite recurrsion results in stack Overflow

#include<iostream>
using namespace std;

int output(){
    output();
    cout<<"Recurrsion"<<endl;
return 0;

}

int main(){
    output();
    return 0;
}

// Output:

// It will print Nothing 
// It will go into infinite function call and then
// Segmentation error will occur