#include <stdio.h>

int main(){

	int input,total;
	
	for(int i=0;i<2;i++){
		scanf("%d",&input);
		total += input;
	}
	printf("%d",total);
	return 0;
}