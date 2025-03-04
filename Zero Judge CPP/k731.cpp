#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,left=0,right=0,turn=0,test=0;
    int x1=0,y1=0,x2,y2;
    string memory;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        
        cin >> (x2) >> y2;

        if(x1<x2 && y1==y2){ //right
            if(test==0){
                test++; 
            }

            if(memory=="up"){
                right++;
            }
            else if(memory=="down"){
                left++;
            }
            else if(memory=="left"){
                turn++;
            }
            memory = "right";
            x1=x2;
            y1=y2;
        }
        else if(x2<x1 && y1==y2){ //left
            if(test==0){
                turn++;
                test++; 
            } 
            
            if(memory=="up"){
                left++;
            }
            else if(memory=="down"){
                right++;
            }
            else if(memory=="right"){
                turn++;
            }
            memory = "left";
            x1=x2;
            y1=y2;
        }
        else if(x1==x2 && y1<y2){ //up
            if(test==0){
                left++;
                test++; 
            }
            
            if(memory=="right"){
                left++;
            }
            else if(memory=="left"){
                right++;
            }
            else if(memory=="down"){
                turn++;
            }
            memory = "up";
            x1=x2;
            y1=y2;
        }
        else if(x1==x2 && y1>y2){ //down
            if(test==0){
                right++;
                test++; 
            }
            if(memory=="right"){
                right++;
            }
            else if(memory=="left"){
                left++;
            }
            else if(memory=="up"){
                turn++;
            }
            memory = "down";
            x1=x2;
            y1=y2;
        }
        
    }
    cout << left << " " << right << " " << turn << '\n';
    return 0;
}
