#include <bits/stdc++.h>

using namespace std;

int main(){
	string input;
	while(cin >> input){

		unsigned long long int count=0;
		if(input == "0"){
			break;
		}
		else{
			for(char c:input){
				count = (count * 10 + (c-'0')) % 17;
			}
		}

		(count==0)? cout << 1 << '\n':cout << 0 << '\n';
	}
	return 0;
}