#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	while(b!=0){
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;	
}

int main(){
	
	int a,b;
	cin >> a >> b;
	
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	cout << gcd(a,b);
	
	return 0;
}