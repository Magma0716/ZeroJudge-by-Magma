#include <bits/stdc++.h>

using namespace std;
int OR(int x,int y);
int AND(int x,int y);
int XOR(int x,int y);

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	
	int x,y,z,count=3;
	cin >> x >> y >> z;
	
	if(AND(x,y)==z){
		count--;
		cout << "AND\n";
	}
	if(OR(x,y)==z){
		count--;
		cout << "OR\n";
	}
	if(XOR(x,y)==z){
		count--;
		cout << "XOR\n";
	}
	if(count==3){
		cout << "IMPOSSIBLE\n";
	}
	return 0;
}
int AND(int x,int y){
	if(x==0 && y==0) return 0;
	if(x==0 && y>=1) return 0;
	if(x>=1 && y==0) return 0;
	if(x>=1 && y>=1) return 1;
	return -1;
}
int OR(int x,int y){
	if(x==0 && y==0) return 0;
	if(x==0 && y>=1) return 1;
	if(x>=1 && y==0) return 1;
	if(x>=1 && y>=1) return 1;
	return -1;
}
int XOR(int x,int y){
	if(x==0 && y==0) return 0;
	if(x==0 && y>=1) return 1;
	if(x>=1 && y==0) return 1;
	if(x>=1 && y>=1) return 0;
	return -1;
}