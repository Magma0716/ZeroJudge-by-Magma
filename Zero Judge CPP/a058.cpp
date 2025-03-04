#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,input;
	cin >> n;

	int a=0,b=0,c=0;
	int arr[n];
	for(int i=0;i<n;i++){
		
		cin >> input;
		if(input==1 || input % 3 == 1){
			b+=1;
		}
		else if(input==1 || input % 3 == 2){
			c+=1;
		}
		else if(input % 3 == 0){
			a+=1;
		}
	}
	cout << a << " " << b << " " << c;
	return 0;
}