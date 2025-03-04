#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;//4
	
	string input;
	getline(cin>>ws ,input);
	istringstream iss(input);//1 2 3 4 5
	
	vector<int> arr;
	
	int num;
	while(iss >> num){
		arr.push_back(num);
	}
	
	arr.pop_back();
	for(int i=0;i<=arr.size()-1;i++){
		arr[i] *= n-i;
	}
	
	for(int Arr:arr){
		cout << Arr << " ";
	}
	return 0;
}