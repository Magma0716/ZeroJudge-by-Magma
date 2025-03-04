#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int time=0,n=0;
	cin >> n; 
	
	if(n==1){
		cout << "1";
	}
	else{
		
		for(int i=2 ; i<=n ; i++){
			
			if(n%i==0){
				while(n%i==0){
					n /= i;
					time += 1;	
				}
				if(time>1){
					cout << i << "^" << time;	
				}
				else{
					cout << i;	
				}
				
				time = 0;
				
				if(n > 1){
                    cout << " * ";
                }
					
			}
	
			}	
		}			
	return 0; 
}
