#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,w1,w2,h1,h2;
    cin >> n >> w1 >> w2 >> h1 >> h2;
    
    string s;
    getline(cin>>ws,s);
    istringstream iss(s);
    vector<int> H;
    vector<int> V;
    int num;
    while(iss>>num){
        V.push_back(num);
    }

    int nowH=0;
    int nowV=0;
    for(int i=0 ; i<n ; i++){
        
        
        nowV += V[i];

        if(nowV>=w1*w1*h1+w2*w2*h2){ //1,2 full
            H.push_back(h1+h2-nowH);
            break;
        }
        else if(nowV==w1*w1*h1){ //1 full
            H.push_back(h1-nowH);
        } 
        else if(nowV>=w1*w1*h1){ //1 full ,2 no full
            int ans1;
            for(int j=0 ; j<=h2 ; j++){
                if(w2*w2*j>=nowV-w1*w1*h1){
                    ans1 = j;
                    break;
                }
            }
            H.push_back(h1+ans1-nowH);
        } 
        else{ //1 no full
            int ans2;
            for(int j=0 ; j<=h1 ; j++){
                if(w1*w1*j>=nowV){
                    ans2 = j;
                    break;
                }
            }
            H.push_back(ans2-nowH);
        }
        nowH += H[i];

    }

    sort(H.begin(),H.end());
    cout << H.back() << '\n';
    return 0;
}