#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	while(getline(cin,input)){
		if(input=="0 0"){
			break;
		}
		
		int n1,n2;
		istringstream iss(input);
		iss >> n1 >> n2;
		
		int count=0;
		for(int i=n1 ; i<=n2 ; i++){
			if(sqrt(i)==(int)sqrt(i)){
				count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}