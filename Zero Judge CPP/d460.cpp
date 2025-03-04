#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(0<=n&&n<=5){
        cout << 0;
        break;
    }
    while(6<=n&&n<=11){
        cout << 590;
        break;
    }
    while(12<=n&&n<=17){
        cout << 790;
        break;
    }
    while(18<=n&&n<=59){
        cout << 890;
        break;
    }
    while(n>=60){
        cout << 399;
        break;
    }
    return 0;
}
