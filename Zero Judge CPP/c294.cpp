#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,c;
    cin >> a >> b >> c;

    vector<long long int> V;
    V.push_back(a);
    V.push_back(b);
    V.push_back(c); 
    sort(V.begin(),V.end());

    cout << V[0] << " " << V[1] << " " << V[2] << '\n';
    if(V[0]+V[1]>V[2] && V[0]+V[2]>V[1] && V[1]+V[2]>V[0]){
        
        if(V[0]*V[0]+V[1]*V[1]<V[2]*V[2]){
            cout << "Obtuse\n";
        }
        else if(V[0]*V[0]+V[1]*V[1]==V[2]*V[2]){
            cout << "Right\n";
        }
        else{
            cout << "Acute\n";
        }
    }
    else{
        cout << "No\n";
    }
    return 0;
}