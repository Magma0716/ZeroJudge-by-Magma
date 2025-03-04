#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	getline(cin,input);
	
	int num1=0;
	int num2=0;
	char symbol;
	istringstream iss(input);
	iss >> num1 >> symbol >> num2;
	
	switch(symbol){
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			cout << num1 / num2;
			break;
	}
	return 0;
}