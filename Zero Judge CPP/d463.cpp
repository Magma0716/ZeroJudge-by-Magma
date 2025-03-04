#include <bits/stdc++.h>

using namespace std;

int main(){
	
	unsigned long long int x;
	
	while(cin>>x){
		cout << int(round(cbrt(x))) << '\n';
	}
	return 0;
}