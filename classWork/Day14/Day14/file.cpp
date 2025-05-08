#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter:";
	cin >> num;

	int digit = 0;

	for (;num;) {
		digit = num % 10;
		num = num / 10;
		cout << digit<<endl;
	}

	
	

}