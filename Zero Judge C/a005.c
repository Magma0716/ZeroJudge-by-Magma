#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	//getchar();
	for(int i=0 ; i<n ; i++){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(b-a==c-b){
			int difference = b-a;
			int e = d + difference;
			printf("%d %d %d %d %d\n",a,b,c,d,e);
		}
		else{
			int ratio = b/a;
			int e = d*ratio;
			printf("%d %d %d %d %d\n",a,b,c,d,e);
		}
	}
	return 0;
}