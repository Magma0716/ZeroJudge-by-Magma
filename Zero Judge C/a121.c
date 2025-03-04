#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long int n);

int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        int count=0;
        for(int i=a ; i<=b ; i++){
            if(isPrime(i)){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
bool isPrime(long long int n){
    //minor
    if(n==1){
        return false;
    }
    //major
    for(long long int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return false;
        }
    } 
    return true;
}