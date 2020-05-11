#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m,x;
	cin>>n>>m>>x;
	int y = n+m+x;
	if(y == 180){
		cout<< "YES"<<endl;
	}
	else{
		cout<< "NO"<<endl;
	}
}
}