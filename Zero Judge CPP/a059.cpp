#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	for(int i=0 ; i<n ;i++){
			
		int a,b,count=0;
		cin >> a >> b;
		
		for(int i=1 ; i<=32 ; i++){
			if(i*i < a){
				continue;
			}
			if(i*i > b){
				break;
			}
			count+=i*i;
		}
		
		cout << "Case " << i+1 << ": " << count << '\n';
	}
	return 0;
}