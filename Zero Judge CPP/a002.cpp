#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int num1,num2;
	string numbers; // "10,5"
	getline(cin,numbers);
	
	istringstream iss(numbers); // 10,5
	
	iss >> num1 >> num2;
	
	cout << num1 + num2;

	return 0;
	
}
