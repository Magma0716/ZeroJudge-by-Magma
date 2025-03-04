#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		int n1,n2,n3,n4;
		string a;
		getline(cin>>ws,a);
		
		istringstream iss(a);
		iss >> n1 >> n2 >> n3 >> n4;
		
		if(n2-n1==n3-n2){
			cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n4+(n2-n1) << '\n';
		}
		else{
			cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n4*(n2/n1) << '\n';
		}
		
	}
	
	return 0;
}
