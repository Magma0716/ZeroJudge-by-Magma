#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	vector<int>V;
	while(cin>>x){
		if(V.empty()){
			V.push_back(x);
		}
		else{
			V.insert(lower_bound(V.begin(),V.end(),x),x);
		}
		if(V.size()%2==0){ //even
			int even1 = (V.size())/2;
			int even2 = (V.size())/2-1;
			cout << (V[even1]+V[even2])/2 << '\n';
			
		}
		else{ //odd
			int odd = (V.size())/2;
			cout << V[odd] << '\n';
		}
	}
}