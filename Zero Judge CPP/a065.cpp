#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char,int>M;
    M['A']=0;
    M['B']=1;
    M['C']=2;
    M['D']=3;
    M['E']=4;
    M['F']=5;
    M['G']=6;
    M['H']=7;
    M['I']=8;
    M['J']=9;
    M['K']=10;
    M['L']=11;
    M['M']=12;
    M['N']=13;
    M['O']=14;
    M['P']=15;
    M['Q']=16;
    M['R']=17;
    M['S']=18;
    M['T']=19;
    M['U']=20;
    M['V']=21;
    M['W']=22;
    M['X']=23;
    M['Y']=24;
    M['Z']=25;

    string input;
    cin >> input;
    for(int i=0 ; i<input.length()-1 ; i++){
        cout << abs(M[input.at(i+1)]-M[input.at(i)]);
    }
    return 0;
}