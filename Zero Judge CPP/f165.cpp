#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1,n2;
	cin >> n1 >> n2;
	if(n2==0 || n1%n2==0){
		cout << "OK!";
	}
	else{
		cout << n1%n2;
	}
	return 0;
}