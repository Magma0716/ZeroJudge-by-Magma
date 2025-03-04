#include <bits/stdc++.h>

using namespace std;

int main(){

    double F;
    cin >> F;

    double C = (F-32)/1.8;
    cout << fixed << setprecision(3) << C << '\n';
    return 0;
}