#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	do{
		cin >> n;
		
		if(n!=0){
			for(int i=0 ; i<n ; i++){
			if(i%7==0){
				continue;
			}
			cout << i << " ";
			}
			cout << '\n';
		}
	}while(n!=0);
	
	return 0;
}
