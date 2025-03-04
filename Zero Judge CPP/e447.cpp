/*
Q.empty()           檢查 Q 是否是空的，若是空的則回傳 true
Q.size()            回傳 Q 中元素的數量
Q.front()           取得 Q 中最前面的元素，不移除
Q.back()            取得 Q 中最後面的元素，不移除
Q.push(x)           將元素 x 放入 Q 的尾端
Q.pop()             移除 Q 中最前面的元素
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    queue<int> Q;

    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> a;
        if(a==1){
            cin >> b;
            Q.push(b);
        }
        else if(a==2){
            if(Q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << Q.front() << '\n';
            }
        }
        else{
            if(!Q.empty()){
                Q.pop();
            }
        }
    }
    return 0;
}