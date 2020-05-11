#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;

    }
    for (int m = 2; m<=n/2; m++){
        if(n%m==0){
            return false;
        }

    }
    return true;
}
int main(){
    int b;
    cin>>b;
    cout << isPrime(b) << endl;
}