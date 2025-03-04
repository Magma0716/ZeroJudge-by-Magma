#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	while(cin >> n){
		
		string two = bitset<32>(n).to_string();
		two.erase(0,two.find_first_not_of("0"));
		
		cout << two << '\n';
		
	}
	return 0;
}
