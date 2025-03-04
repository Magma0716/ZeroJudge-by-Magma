#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input,hello,name;

	getline(cin,input);
	istringstream iss(input);
	
	getline(cin,hello);
	while(iss >> name){
		cout << hello << ", " << name << '\n';
	}	
	
	return 0;
}