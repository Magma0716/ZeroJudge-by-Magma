#include <bits/stdc++.h>

using namespace std;

int main(){

    //calculate febona (0,1,1,2,3,5,8)
    vector<long long int>V;
    V.push_back(0); V.push_back(1);
    for(int i=2;i<=40;i++){
        V.push_back(V[i-2]+V[i-1]);
    }

    int n;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        long long int a,b,min=-1,max=-1;
        cin >> a >> b;
        if(a>b) swap(a,b);

        //find min
        for(int j=0 ; j<V.size() ; j++){
            if(V[j]>=a){
                min = j;
                break;
            }
        }
        //find max
        for(int j=0 ; j<V.size() ; j++){
            if(V[j]>b){
                max = j-1;
                break;
            }
        }

        //output
        if(V[min]>V[max]){
            cout << 0 << '\n';
        }
        else if(V[min]==V[max]){
            cout << V[min] << '\n';
            cout << 1 << '\n';
        }
        else{
            int count=0;
            for(int j=min ; j<=max ; j++){
                cout << V[j] << '\n';
                count++;
            }
            cout << count << '\n';
        }

        //line
        if(i+1!=n){
            cout << "------\n";
        }
    
    }
    return 0;
}