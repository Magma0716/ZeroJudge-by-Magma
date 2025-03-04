#include <bits/stdc++.h>

using namespace std;
int cal_roma(string roma);
string cal_number(int num);

int main(){
	
	string input;
	while(true){
		
		getline(cin,input); //"MM II"
		
		if(input=="#"){
			break;
		}
		
		string roma1; //MM
		string roma2; //II
		istringstream iss(input);
		iss >> roma1 >> roma2;
		
		int int_roma1 = cal_roma(roma1);
		int int_roma2 = cal_roma(roma2);
		
		int int_romafinal = abs(int_roma1 - int_roma2); //1998
		
		if(int_romafinal!=0){
			cout << cal_number(int_romafinal) << '\n';	
		}
		else{
			cout << "ZERO" << '\n';
		}
	}
	
	return 0;
}

int cal_roma(string roma){ //MM
	
	int size = roma.length(); //2
	char arr[size]; //['?','?']
	
	for(int i=0;i<size;i++){
		arr[i] = roma.at(i); //['M','M']
	}
	
	int arr2[size]; //[?,?]
	for(int i=0;i<size;i++){
		switch(arr[i]){
			case 'I':
				arr2[i] = 1;
				break;
			case 'V':
				arr2[i] = 5;
				break;
			case 'X':
				arr2[i] = 10;
				break;
			case 'L':
				arr2[i] = 50;
				break;
			case 'C':
				arr2[i] = 100;
				break;
			case 'D':
				arr2[i] = 500;
				break;
			case 'M':
				arr2[i] = 1000;
				break;
		}
	} //arr2[1000,1000]
	
	int total=arr2[size-1];
	for(int i=size-1 ; i>0 ; i--){
		if(arr2[i]>arr2[i-1]){
			total -= arr2[i-1];
		}
		else{
			total += arr2[i-1];
		}
	}
	
	return total;
}

string cal_number(int num){ //1998
	
	string answer;
	
	map <int,string,greater<int>> x = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    
    for(const auto& [key,value]:x){
		while(num>=key){
			num -= key;
			answer.append(value);
		}
	}	
		
	return answer;	
}