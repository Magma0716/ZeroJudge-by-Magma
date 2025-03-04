#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int M,D,S;
	string input;
	getline(cin,input);
	
	istringstream iss(input);
	iss >> M >> D;
	
	S = ( M * 2 + D ) % 3;
	
	if(S==0){
		cout << "´¶³q";
	}
	else if(S==1){
		cout << "¦N";
	}
	else{
		cout << "¤j¦N"; 
	}
	
	return 0;
	
}
