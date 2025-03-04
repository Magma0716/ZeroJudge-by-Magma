#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,count=0;
	while(cin>>n){
		if(0<n && n<10001){
			count++;
			cout << "Case " << count << ": "<< ceil(log2(n)) << '\n';	
		}
		else{
			break;
		}	
	}
	return 0;
}