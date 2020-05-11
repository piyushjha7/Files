#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int sum = 0;
		cin>>n;
		while(n>0){
			int ls_digit = n%10;
			sum = sum + ls_digit;
			n = n/10;
		}
		cout<< sum<< endl;
	}
} 