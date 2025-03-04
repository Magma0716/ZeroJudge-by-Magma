#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	vector<long long int> V;
	
	getline(cin,input);
	istringstream iss(input);
	long long int num;
	while(iss >> num){
		V.push_back(num);
	}
	
	long long int lastNum = V.back(); 
	V.pop_back();
	
	long long int add=V[0],sub=V[0],time=V[0],div=V[0],Pow=V[0];	
	for(long long int i=1 ; i<V.size() ; i++){
		add += V[i];
		sub -= V[i];
		time *= V[i];
		div /= V[i];
		Pow = pow(Pow,V[i]);
	}
	if(add==lastNum) cout<<"+\n";
	if(sub==lastNum) cout<<"-\n";
	if(time==lastNum) cout<<"*\n";
	if(div==lastNum) cout<<"/\n";
	if(Pow==lastNum) cout<<"**\n";
	return 0;
}