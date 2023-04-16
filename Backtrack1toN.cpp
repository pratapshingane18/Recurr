//Print number from 1 to N By BackTracking

#include<iostream>
using namespace std;
int cnt =1;

int output(int n){
    if(cnt > n){
        return 0;
    }
    n--;
    
    output(n);

    cout<<n<<endl;
    

return 0;

}

int main(){
    output(101);
    return 0;
}
