#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double A,B,C,x,y,z,Area;
	int a,b,c;
	cin >> A >> B >> C;
	
	//square
	y = (A-C+B)/2;
	x = A - y;
	z = B - y;
	//normal
	a = sqrt(A);
	b = sqrt(B);
	c = sqrt(C);
	
	Area = sqrt(x*y+y*z+x*z)/2;
	
	if(a+b>c && b+c>a && c+a>b){
		cout << fixed << setprecision(4) << x << '\n' << y << '\n' << z << '\n' << Area << '\n';
	}
	else{
		cout << "error\n";
	}
}