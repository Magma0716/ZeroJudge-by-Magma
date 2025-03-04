#include <bits/stdc++.h>

using namespace std;
string outputs[5] = {"Hello, World!", "hello, world", "Halo, word!!!", "世界，您好！", "https://zerojudge.tw/ShowProblem?problemid=a001"};

int main() {
	cout << outputs[time(NULL) % 5];
	this_thread::sleep_for(chrono::milliseconds(950));
}