#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	string arr;
	while(cin >> n >> m){
		
		int count = 0,count2 = 0;
		for(int i=n ; i<=100000 ; i++){
			count += i;
			count2 ++;
			if(count>m){
				cout << count2 << '\n';
				break;
			}
		}
	}
	return 0;
}