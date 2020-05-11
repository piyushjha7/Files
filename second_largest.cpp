#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,b;
		cin>>n>>m>>b;
		if(n>m && n>b){
			if(m>b){
				cout << m << endl;
			}
			else{
				cout << b << endl;
			}

		}
		if(m>n && m>b){
			if(n>b){
				cout << n << endl;
			}
			else{
				cout << b << endl;

			}
		}
		if(b>m && b>n){
			if(m>n){
				cout << m << endl;
			}
			else{
				cout << n << endl;
			}
		}
	}
}