#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int x = n%10;
	while(n>=10){
		n = n/10;
	}
	int u = x+n;

	cout<<u<<endl;
}
}