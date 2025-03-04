#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	int num1; //27
	char account=input.at(0);
	switch(account){	
		case 'A':
		    num1 = 10;
		    break;
		case 'B':
		    num1 = 11;
		    break;
		case 'C':
		    num1 = 12;
		    break;
		case 'D':
		    num1 = 13;
		    break;
		case 'E':
		    num1 = 14;
		    break;
		case 'F':
		    num1 = 15;
		    break;
		case 'G':
		    num1 = 16;
		    break;
		case 'H':
		    num1 = 17;
		    break;
		case 'I':
		    num1 = 34;
		    break;
		case 'J':
		    num1 = 18;
		    break;
		case 'K':
		    num1 = 19;
		    break;
		case 'L':
		    num1 = 20;
		    break;
		case 'M':
		    num1 = 21;
		    break;
		case 'N':
		    num1 = 22;
		    break;
		case 'O':
		    num1 = 35;
		    break;
		case 'P':
		    num1 = 23;
		    break;
		case 'Q':
		    num1 = 24;
		    break;
		case 'R':
		    num1 = 25;
		    break;
		case 'S':
		    num1 = 26;
		    break;
		case 'T':
		    num1 = 27;
		    break;
		case 'U':
		    num1 = 28;
		    break;
		case 'V':
		    num1 = 29;
		    break;
		case 'W':
		    num1 = 32;
		    break;
		case 'X':
		    num1 = 30;
		    break;
		case 'Y':
		    num1 = 31;
		    break;
		case 'Z':
		    num1 = 33;
		    break;
		default:
		    num1 = -1;
		    break;
	}
	
	int number[11]; //[2,7,...,6]
	number[0] = num1/10;
	number[1] = num1%10;
	
	for(int i=2;i<11;i++){
		number[i] = input.at(i-1)-'0';
	}
	number[1] *= 9;
	number[2] *= 8;
	number[3] *= 7;
	number[4] *= 6;
	number[5] *= 5;
	number[6] *= 4;
	number[7] *= 3;
	number[8] *= 2;
	number[9] *= 1;
	
	int total;
	for(int num:number){
		total += num;
	}
	
	if(total%10==0){
		cout << "real";
	}
	else{
		cout << "fake";
	}
	
	return 0;
}