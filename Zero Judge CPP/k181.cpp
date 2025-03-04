#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	int count=0;
	
	cin >> input;
	
	for(int i=1 ; i<input.length() ; i++){
		if(input.at(i)=='8'){
			count++;
		}
	}
	int snap = 100 - (10 - count)*10;
		cout << input << " can get " << snap << "% off.";
	return 0;
}