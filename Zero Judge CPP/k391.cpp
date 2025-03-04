#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string player_name,opponent_name;
	int player_score,opponent_score;
	
	string input;
	getline(cin,input);
	
	istringstream iss(input);
	iss >> player_name >> player_score;
	
	string input2;
	getline(cin,input2);
	
	istringstream ss(input2);
	ss >> opponent_name >> opponent_score;
	
	if(player_score>opponent_score){
		cout << player_name << " WIN!";
	}
	else if(player_score<opponent_score){
		cout << player_name << " LOSE!";
	}
	else{
		cout << "tie";
	}
	
	return 0;
}
