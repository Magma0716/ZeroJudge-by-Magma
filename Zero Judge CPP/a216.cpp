#include <bits/stdc++.h>

using namespace std;

long long int f(long long int num){
	if(num>0){
		return num + f(num-1);	
	}
	return 0;
}
long long int g(long long int num2){
	if(num2>0){
		return f(num2) + g(num2-1);
	}
	return 0;
}

int main(){
	
	long long int n;
	while(cin >> n){
		cout << f(n) << " " << g(n) << '\n';
	}
	return 0;
}