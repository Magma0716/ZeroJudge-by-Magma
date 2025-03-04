#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
	char input[1000];

	while(scanf("%s",&input)){
		int count=0;
		if(strcmp(input,"0")==0){
			break;
		}
		else{
			for(int i=0 ; i<strlen(input) ; i++){
				count = (count * 10 + (input[i]-'0')) % 17;
			}
		}
		(count==0)? printf("1\n"):printf("0\n");
	}
	return 0;
}