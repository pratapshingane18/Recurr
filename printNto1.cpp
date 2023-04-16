//Print number from 1 to N

#include<iostream>
using namespace std;
int cnt =1;
int output(int n){
    if(cnt > n){
        return 0;
    }
    cout<<n<<endl;
    n--;
    output(n);

return 0;

}

int main(){
    output(100);
    return 0;
}
