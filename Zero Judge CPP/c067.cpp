#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,count=0;
	string input;
	while(cin >> n){
		int total=0,moves=0;
		if(n==0){
			break;
		}
	
		count++;
		getline(cin>>ws,input);
		istringstream iss(input);
		int num=0;
		vector<int> V;
		while(iss >> num){
			V.push_back(num);
		}
		for(int v:V){
			total += v;
		}
		int average = total/n;
		for(int v:V){
			moves += abs(v-average);
		}
		cout << "Set #" << count << '\n';
		cout << "The minimum number of moves is " << moves/2 << ".\n";
	}
	return 0;
}