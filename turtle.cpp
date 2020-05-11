#include <iostream>
using namespace std;
int multiply_1(int a, int b){
	int y;
	 y = a * b;
	 return y;
}

int main(){
	int m;
	int n;
	cout << "Enter your first number :";
	cin>> m;
	cout << "Enter your second number :";
	cin>>n;

	int k = multiply_1(m,n);

	cout << "Your Answer = " << k << endl;

}