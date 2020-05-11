#include <iostream>
using  namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>> n>>m;
	if(n>m){
		cout << '>' << endl;
	}
	else if(m>n){
		cout << '<' << endl;
	}
	else {
		cout << '=' << endl;
	}
}
}