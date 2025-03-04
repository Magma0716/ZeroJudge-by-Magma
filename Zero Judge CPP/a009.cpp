#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string choas;
	getline(cin,choas);

	int size = choas.length(); 
	
	for(int i=0 ; i<size ; i++){
		cout << char(choas.at(i)-7);
	}

	return 0;
}

