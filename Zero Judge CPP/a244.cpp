#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long n,n1,n2,n3;
	string numbers;
	cin >> n;
	
	for(int i=0 ; i<n ; i++){
		
		getline(cin>>ws,numbers);
		istringstream iss(numbers);
		iss >> n1 >> n2 >> n3;
		
		if(n1==1){
			cout << n2+n3 << '\n';
		}
		else if(n1==2){
			cout << n2-n3 << '\n';
		}
		else if(n1==3){
			cout << n2*n3 << '\n';
		}
		else if(n1==4 && n3!=0){
			cout << n2/n3 << '\n';
		}
		
	}
	return 0;
}
