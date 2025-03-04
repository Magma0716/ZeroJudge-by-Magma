#include <bits/stdc++.h>

using namespace std;
long long int Greater(string n,long long int nInt);
long long int Less(string n,long long int nInt);

int main(){
	string n;
	while(cin >> n){
		
		//change n datatype into int
		long long int nInt;
		stringstream(n) >> nInt;
		 
		//greater
		long long int a1 = Greater(n,nInt);
		
		//less
		long long int a2 = Less(n,nInt);
		
		//comparsion
		cout << min(abs(nInt-a1),abs(nInt-a2)) << '\n';
		
	}
	return 0;		
}

long long int Greater(string n,long long int nInt){
	
	int count=0;
	for(int i=0 ; i<n.length() ; i++){
		if((n[i]-'0')%2==0 && count==0){
			n[i] += 1; 
			count = 1;
		}
		else if(count==1){
			n[i] = '1';
		}
	}
	
	//change n datatype into int
	stringstream(n) >> nInt;
	return nInt;
}
long long int Less(string n,long long int nInt){
	
	int count=0;
	for(int i=0 ; i<n.length() ; i++){
		if((n[i]-'0')%2==0 && count==0 && n[i]=='0'){
			n[i] = '9';
			n[i-1] -= 2;
			
			count = 1;
		}
		else if((n[i]-'0')%2==0 && count==0){
			n[i] -= 1; 
			count = 1;
		}
		else if(count==1){
			n[i] = '9';
		}
	}
	
	if(n[0] == '/'){
		n.erase(remove(n.begin(),n.end(), '/'),n.end());
	}
	
	//change n datatype into int
	stringstream(n) >> nInt;
	return nInt;
}