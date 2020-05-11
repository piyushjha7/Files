#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n , count = 0;
	    cin>>n;
	    while(n>0){
	        int k = n%10;
	        if(k==4){
	            count++;
	            n = n/10;
	        }
	        else{
	            n = n/10;
	        }
	    }
	    cout<<count<<"\n";
	    
	}
	return 0;
}
