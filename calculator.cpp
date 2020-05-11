#include <iostream>
#include <iomanip>
using namespace std;
float sum1(float a , float b){
	float c = a+b;
	return c;
}
float difference1(float a, float b){
	float c = a-b;
	return c;
}
float multiply1(float a, float b){
	float c = a*b;
	return c;
}
float divide1(float a, float b){
	if(b==0){
		cout<< "Division by 0 is not possible";
		return -999;
	
	}
	else{
		float c = a/b;
		return c;
	}
}

void calculator1(float x,float y,char op){
	if(op=='+'){
		cout<< sum1(x,y) << endl;
	}
	else if(op=='-'){
		cout << difference1(x,y)<< endl;
	}
	else if(op=='*'){
		cout  << multiply1(x,y)<< endl;
	}
	else if(op=='/'){
		cout << fixed << setprecision(6)<< divide1(x,y)<< endl;
	}
	else{
		cout <<"YOU DUMB PIECE OF SHIT.....YOU SON OF A */+=%"<< endl;
	}
	
	
}



int main(){
	float i,o;
	char p;
	cin>>i>>o>>p;
	calculator1(i,o,p);
	cout<<endl;
}






