#include <bits/stdc++.h>

using namespace std;

int main(){
	int hour,min;
	cin >> hour >> min;
	
	if((hour==7 && min>=30) || (hour>=8 && hour<17)){
		cout << "At School";
	}
	else{
		cout << "Off School";
	}
	return 0;
}
