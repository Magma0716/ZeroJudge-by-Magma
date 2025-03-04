#include <bits/stdc++.h>

using namespace std;
bool isPrime(long long int n);

int main(){
	long long int a,b;
	while(cin >> a >> b){
		int count=0;
		for(long long int i=a; i<=b ; i++){
			if(isPrime(i)){
				count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}
bool isPrime(long long int n){
	//minor
	if(n==1){
		return false;
	}
	//main
	for(long long int i=2 ; i*i<=n ;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
