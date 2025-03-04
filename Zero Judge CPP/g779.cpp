#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    int k;
    cin >> n >> k;

    //judge1
    int count=0;
    for(char c:n){
        count = (count*10+(c-'0'))%k;
    }

    //judge2
    int ans = 0;
    for(char c:n){
        if(c-'0'==k){
            ans++;
        }
    }

    //final judge
    (count==0 || ans>0)? cout << "YES" : cout << "NO";
    return 0; 
}
