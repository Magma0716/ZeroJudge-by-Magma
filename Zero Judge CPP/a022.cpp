#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string Input;
	cin >> Input; //abba 
	
	queue<char> Q;
	stack<char> S;
	
	for(char input:Input){
		Q.push(input); //['a','b','b','a']
		S.push(input); //['a','b','b','a']
	}
	
	int count=0;
	while(!Q.empty()){
		if(Q.front() != S.top()){
			cout << "no";
			count++;
			break;
		}
		Q.pop();
		S.pop();
	}
	
	if(count==0){
		cout << "yes";
	}
	
	return 0;
}