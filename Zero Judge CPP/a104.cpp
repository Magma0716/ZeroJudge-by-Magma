#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string arr;
	while(cin >> n){
		
		getline(cin>>ws,arr); //"1 2 3"
		istringstream iss(arr); //1 2 3
		vector<int> V; //<>
		
		int num;
		while(iss >> num){
			V.push_back(num);
		}
		
		sort(V.begin(),V.end());
		
		for(int i=0;i<V.size();i++){
			cout << V[i] << " ";
		}
		cout << '\n';
	}
}