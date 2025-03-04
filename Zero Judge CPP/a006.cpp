#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int ans1,ans2;
	int a,b,c;
	string numbers;
	getline(cin,numbers);
	
	istringstream iss(numbers);
	iss >> a >> b >> c;

	if( (-b+sqrt(b*b-4*a*c))/(2*a) > (-b-sqrt(b*b-4*a*c))/(2*a) ){
		ans1 = ((-b+sqrt(b*b-4*a*c))/(2*a));
		ans2 = ((-b-sqrt(b*b-4*a*c))/(2*a));
	}
	else{
		ans1 = ((-b-sqrt(b*b-4*a*c))/(2*a));
		ans2 = ((-b+sqrt(b*b-4*a*c))/(2*a));
	}
	
	if((b*b-4*a*c)>0){
		cout << "Two different roots x1=" << ans1 << " , " << "x2=" << ans2;
	} 
	else if((b*b-4*a*c)==0){
		cout << "Two same roots x=" << ans1;
	}
	else{
		cout << "No real root";
	}
	
}
