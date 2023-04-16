#include<iostream>
using namespace std;

bool checkpal(string &ispal, int left, int right){
    //after half string is check and if no false case if found then its ultimately palinfrome
    if(left >= right){
        return true;
    }

    // Base case
    if(ispal[left] != ispal[right]){
        return false;
    }

    // recurrsivly checking
    return checkpal(ispal,left+1,right-1);

    
}

int main(){
 
    string ispal = "a";
    int n = ispal.length();

    cout<<checkpal(ispal,0, n-1);
    return 0;
}