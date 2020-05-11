#include <iostream>
using namespace std;


void print_english(int n){

	if(n==1){

		cout<< "one"<<endl;
	}	
	else if(n==2){
		cout<< "two"<<endl;

	}
	else if(n==3){
		cout<<"three"<<endl;

	}
	else if(n==4){
		cout<<"four"<<endl;

	}
	else if(n==5){
		cout<<"five"<<endl;

	}
	else if(n==6){
		cout<<"six"<<endl;
	}
	else if(n==7){
		cout<<"seven"<<endl;
	}
	else if(n==8){
		cout<<"eight"<<endl;
	}
	else if(n==9){
		cout<<"nine"<<endl;

	}
	else{
		cout<<"Greater than 9";
		
	}

}


int main(){
	// int n;
	// cin>> n;

	// print_english(n);
	int a;
	int b;
	cin >> a;
	cin >> b;

	for(int n=a; n<=b; n=n+1){
		if(n<=9 && n>=1){
			 print_english(n);
			  

	
		}
		else if(n>9 && n%2==0){
			cout<< "even" << endl;
		}
		else if(n>9 && n%2==1){
			cout<< "odd" << endl;
		}



	}	
}