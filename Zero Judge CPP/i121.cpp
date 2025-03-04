#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	getline(cin,input);
	
	istringstream iss(input);
	vector<string> V;
	
	string num;
	while(iss >> num){
		V.push_back(num);
	}
	
	int n;
	cin >> n;
	switch(n){
		case 1:
			for(int i=0 ; i<V.size() ; i++){
				for(int j=0 ; j<V[i].length() ; j++){
					if(isalpha(V[i][j])){
						V[i][j] = tolower(V[i][j]);
					}
				}
			}
			if(isalpha(V[0][0])){
				V[0][0] = toupper(V[0][0]);
			}
			break;
		case 2:
			for(int i=0 ; i<V.size() ; i++){
				for(int j=0 ; j<V[i].length() ; j++){
					if(isalpha(V[i][j])){
						V[i][j] = toupper(V[i][j]);
					}
				}
			}
			break;
		case 3:
			for(int i=0 ; i<V.size() ; i++){
				for(int j=0 ; j<V[i].length() ; j++){
					if(isalpha(V[i][j])){
						V[i][j] = tolower(V[i][j]);
					}
				}
			}
			
			for(int i=0 ; i<V.size() ; i++){
				int count=0;
				for(int j=0 ; j<V[i].length() ; j++){
					if(isalpha(V[i][j]) && count==0){
						V[i][j] = toupper(V[i][j]);
						count++;
					}
					if(V[i][j]=='-' && count==1){
						V[i][j+1] = toupper(V[i][j+1]);
					}
				}
			}
			break;
		case 4:
			for(int i=0 ; i<V.size() ; i++){
				for(int j=0 ; j<V[i].length() ; j++){
					if(isalpha(V[i][j])){
						V[i][j] = tolower(V[i][j]);
					}
				}
			}
			break;
	}
	
	for(int i=0 ; i<V.size() ; i++){
		cout << V[i] << " ";
	}
	return 0;
}