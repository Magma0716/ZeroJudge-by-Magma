#include <stdio.h>
#include <string.h>
void stringReverse(char reverse[]);

int main(){
	
	int num;
	char input[1000],reverse[1000];
	scanf("%s",input);
	
	strcpy(reverse,input);
	stringReverse(reverse);
	
	num = strcmp(input,reverse);
	
	if(num == 0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}

void stringReverse(char reverse[]){
	int num = strlen(reverse);
	for(int i=0;i<num/2;i++){
		char temp = reverse[i];
		reverse[i] = reverse[num-i-1];
		reverse[num-i-1] = temp;
	}
}