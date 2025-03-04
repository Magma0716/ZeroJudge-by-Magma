#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m,None=0;
	cin >> n >> m;
	
	for(int i=n ; i<=m ; i++){
		int LOG,one,ten,hun,thu,tenthu,hunthu,mill;
		LOG = log10(i);
		
		if(i<10){
			cout << i << " ";
			None++;
		}
		else if(LOG+1 == 3){ //100~999
			one = i % 10;
			ten = i / 10 % 10;
			hun = i / 100;
			
			if(i == pow(one,3)+pow(ten,3)+pow(hun,3)){
				cout << i << " ";
				None++;
			}
		}
		else if(LOG+1 == 4){ //1000~9999
			one = i % 10;
			ten = i / 10 % 10;
			hun = i / 100 % 10;
			thu = i / 1000;
			
			if(i == pow(one,4)+pow(ten,4)+pow(hun,4)+pow(thu,4)){
				cout << i << " ";
				None++;
			}
		}
		else if(LOG+1 == 5){
			one = i % 10;
			ten = i / 10 % 10;
			hun = i / 100 % 10;
			thu = i / 1000 % 10;
			tenthu = i / 10000;
			
			if(i == pow(one,5)+pow(ten,5)+pow(hun,5)+pow(thu,5)+pow(tenthu,5)){
				cout << i << " ";
				None++;
			}
		}
		else if(LOG+1 == 6){
			one = i % 10;
			ten = i / 10 % 10;
			hun = i / 100 % 10;
			thu = i / 1000 % 10;
			tenthu = i / 10000 % 10;
			hunthu = i / 100000;
			
			if(i == pow(one,6)+pow(ten,6)+pow(hun,6)+pow(thu,6)+pow(tenthu,6)+pow(hunthu,6)){
				cout << i << " ";
				None++;
			}
		}
		else if(LOG+1 == 7){
			one = i % 10;
			ten = i / 10 % 10;
			hun = i / 100 % 10;
			thu = i / 1000 % 10;
			tenthu = i / 10000 % 10;
			hunthu = i / 100000 % 10;
			mill = i / 1000000;
			
			if(i == pow(one,7)+pow(ten,7)+pow(hun,7)+pow(thu,7)+pow(tenthu,7)+pow(hunthu,7)+pow(mill,7)){
				cout << i << " ";
				None++;
			}
		}
	}
	if(None==0){
		cout << "none";
	}
	return 0;
}