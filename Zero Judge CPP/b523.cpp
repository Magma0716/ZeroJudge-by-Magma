#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	vector<string>V;
	while(getline(cin,input)){
		int count=0;
		for(string s:V){
			if(input==s){
				count=1;	
			}
		}
		V.push_back(input);
		
		(count==1)? cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}