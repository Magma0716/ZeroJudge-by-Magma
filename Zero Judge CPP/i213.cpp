/*
<stack的宣告>
stack<int> stk;            整數stack
stack<char> stk;         字元stack
stack<double> stk;     浮點數stack

<stack基本語法>
stk.top();                     取出stack中最上層的數
stk.pop();                    刪除stack中最上層的數
stk.push(x);                將x加入stack中
stk.empty();                若stack是空的回傳true，否則回傳false
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    stack<int> S;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        
        cin >> a;
        if(a == 1){
            cin >> b;
            S.push(b);
        }
        else if(a == 2){
            if(S.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << S.top() << '\n';
            }
        }
        else{
            if(!S.empty()){
                S.pop();
            }
        }
    }
    return 0;
}