#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int row,col;
	while(cin >> row >> col){
		
		vector<vector<int>> matrix(row,vector<int>(col));
		vector<vector<int>> matrix2(col,vector<int>(row));
		
		string temp;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
					cin >> matrix[i][j];	
			}
		}
		
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
					matrix2[j][i] = matrix[i][j];	
			}
		}
		
		for(int i=0;i<col;i++){
			for(int j=0;j<row;j++){
					cout << matrix2[i][j] << " ";	
			}
			cout << '\n';
		}
	}
	return 0;
}