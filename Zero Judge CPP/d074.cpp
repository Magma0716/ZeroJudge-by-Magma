#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string input;
    cin >> n;
    getline(cin>>ws,input);

    istringstream iss(input);
    vector<int>V;
    int num;
    while(iss>>num){
        V.push_back(num);
    }
    sort(V.begin(),V.end());

    cout << V.back();
    return 0;
}