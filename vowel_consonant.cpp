#include <iostream>
using namespace std;


bool isVowel(char n){
	if(n =='A' ||  n=='E' || n== 'I' || n==  'O' || n==  'U'){
		return true;
	}
	else{
		return false;
	}
}


int main(){
	char n;
	cin>>n;


	if(isVowel(n)){
		cout << "Vowel" << endl;
	}
	else{
		cout << "Consonant" << endl;
	}




	// if(n =='A' ||  n=='E' || n== 'I' || n==  'O' || n==  'U'){
	// 	cout << "Vowel" << endl;
	// }
	// else{
	// 	cout<<"Consonant"<< endl;

	// }
}