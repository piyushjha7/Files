#include <iostream>
using namespace std;
int main(){

	int sum = 0;
	int n;
	cout<< "Enter Your Number : ";
	cin>>n;
	for(int i = 0; i<=n; i++){
		sum = sum+i;
	}
	cout <<"Sum = "<< sum<< endl;
}