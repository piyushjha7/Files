#include <iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int i;
		cin>>i;
		int count = 0;
		while(i>0){
			int x = i%10;
			if(x==4){
				count++;
				i = i/10;
		}
			else{
				i = i/10;
			}
		}
			cout<<count<<endl;
	}
	
}