#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	double Pi,ans;
	cin >> n;
	
	Pi = n*sin(acos(-1)/n);
	ans = acos(-1) - Pi;
	
	cout << scientific << setprecision(2) << ans << '\n';
}