#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	getline(cin,input);
	
	vector<int> arr;
	
	istringstream iss(input); //1+2+3
	
	int num;
	while(iss >> num){
		if(iss.peek() == '+'){
			iss.ignore();
		}
		arr.push_back(num); //<1,2,3>
	}
	
	sort(arr.begin(),arr.end());
	cout << arr[0];
	
	for(int i=1;i<=arr.size()-1;i++){
		cout << "+" << arr[i];
	}
	return 0;
}