#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int input;
	double n[10005];
	
	while(cin>>input){
		double sum = 0;
		for(int i=0;i<input;i++){
			cin >> n[i];
			sum += n[i];
		}
		
		if(sum/input > 59){
			cout << "no\n";
		}
		else{
			cout << "yes\n";
		}
	}
	
	return 0;
		
}
