#include <stdio.h>

int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);

    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    int count=0;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            count += i;
        }
    }
    printf("%d\n",count);
    return 0;
}