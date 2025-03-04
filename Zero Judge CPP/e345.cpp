#include <bits/stdc++.h>

using namespace std;

int main(){

    string input;
    vector<long long int>V;
    while(cin >> input){
        int ans=0;
        V.clear();

        for(int i = 0; i<input.size() ; i++){
            V.push_back(input[i] - '0');
        }
        if(V.size()==1){
            ans=1;
        }

        while(V.size()!=1){
            long long int count=0;

            for(int i=0 ; i<V.size()-1 ; i++){
                count += V[i];
            }
            //judge
            if(count == V.back()){
                cout << count+V.back() << '\n';
                V.clear(); //reset
                break;
            }
            else{
                count += V.back();
                input = to_string(count);
                V.clear(); //reset

                for(int i = 0; i<input.size() ; i++){
                    V.push_back(input[i] - '0');
                }
                ans=1;
            }
        }

        if(ans==1 && !V.empty()){
            cout << V[0] << '\n';
        }
    }
    return 0;
}
