#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	while(cin >> n){
		
		string arr;
		getline(cin>>ws,arr);
		istringstream iss(arr);
		
		int num;
		vector<int> V;
		while(iss >> num){
			V.push_back(num);
		}
		
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				if(V[i]%10 < V[j]%10){
					int temp = V[i];
					V[i] = V[j];
					V[j] = temp;
				}
			}
		}
		
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				if(V[i]%10 == V[j]%10 && V[i] > V[j]){
					int temp = V[i];
					V[i] = V[j];
					V[j] = temp;
				}
			}
		}
		
		for(int i=0 ; i<n ; i++){
			cout << V[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}