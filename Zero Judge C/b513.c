#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return  false;
        }
    }
    return true;
}
int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int input=0;
        scanf("%d",&input);

        if(isPrime(input)){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}