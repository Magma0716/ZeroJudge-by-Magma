#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input; //"aabb"
	
	while(getline(cin,input)){
		unordered_map<char,int> alphabet;
		
		for(char Input:input){
			if(isalpha(Input)){
				alphabet[tolower(Input)]++;	
			}
		}
		
		int count=0;
		
		for(const auto& alpha:alphabet){
			if(alpha.second%2==1){
				count++;
			}	
		}
		
		if(count > 1 && input.length()%2==1){ //odd 1
			cout << "no...\n";
		}
		else if(count > 0 && input.length()%2==0){ // even 0
			cout << "no...\n";
		}	
		else{
			cout << "yes !\n";
		}
	}
	return 0;
} 