#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	while(cin>>n){
		if(n=="0"){
			break;
		}

		long long int a=0,b=0;
		
		for(int i=0 ; i<n.length() ; i++){
			if(i%2==0){
				a += n.at(i) - '0';
			}
			else{
				b += n.at(i) - '0';
			}
		}
		(abs(a-b)%11==0)? cout<<n<<" is a multiple of 11.\n":cout<<n<<" is not a multiple of 11.\n";
	}
	return 0;
}