#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string Input;
	cin >> Input;
	
	if(Input=="0" || Input.at(0)=='0'&&Input.at(1)=='0'){
		cout << 0;
	}
	else{
		stack<char> S;
		
		for(int input:Input){
			S.push(input); //<1,2,3,4,5>
		}
		
		string answer;
		while(!S.empty()){
			answer += S.top();
			S.pop(); 
		}
		
		answer.erase(0,answer.find_first_not_of("0"));
			
		cout << answer;
	}
	return 0;
}