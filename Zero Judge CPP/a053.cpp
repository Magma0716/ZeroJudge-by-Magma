#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n=0,score=0;
	cin >> n;
	
	if(n<=10){
		score = n*6;
	}
	else if(n>10 && n<=20){
		score = (n-10)*2 + 60;
	}
	else if(n>20 && n<=40){
		score = (n-20) + 80;
	}
	else{
		score = 100;
	}	
	cout << score;
	return 0;
}