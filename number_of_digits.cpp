#include <iostream>
using namespace std;
int main(){
	int n,m=0;
	cin>>n;
	while(n>0){
		n=n/10;
		m++;
	}
	if(m==0){
		cout << '1'<< endl;
	}
	else if(m>3){
		cout<< "More than 3 digits"<< endl;
	}
	else{
	cout<< m<< endl;
}

}