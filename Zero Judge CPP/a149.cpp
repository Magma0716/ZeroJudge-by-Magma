#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i=0 ; i<n ; i++){
		
		int ans=1;
		string number;
		cin >> number; //"356"
		
		for(int j=0 ; j<number.length() ; j++){
			ans *= (number.at(j)-'0');
		}
		
		cout << ans << '\n';
		
	}
	return 0;
}

