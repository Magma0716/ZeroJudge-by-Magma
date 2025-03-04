#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        vector<int> V1;
        vector<int> V2;

        //one
        string s;
        getline(cin>>ws,s);
        istringstream iss1(s);
        int num;
        while(iss1 >> num){
            V1.push_back(num);
        }
        //two
        getline(cin>>ws,s);
        istringstream iss2(s);
        while(iss2 >> num){
            V2.push_back(num);
        }

        int wrongCount=0;
        if(V1[1]==V1[3] || V1[1]!=V1[5] ||
           V2[1]==V2[3] || V2[1]!=V2[5] ){
            cout << "A";
            wrongCount++;
        }
        if(V1.back()!=1 || V2.back()!=0){
            cout << "B";
            wrongCount++;
        }
        if(V1[1]==V2[1] || V1[3]==V2[3] ||V1[5]==V2[5]){
            cout << "C";
            wrongCount++;
        }
        if(wrongCount==0){
            cout << "None";
        }
        cout << '\n';
    }
    return 0;
}