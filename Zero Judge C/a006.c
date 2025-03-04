#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    int judge = b*b-4*a*c;
    int Pos = (-b+sqrt(judge))/(2*a);
    int Neg = (-b-sqrt(judge))/(2*a);

    if(judge>0){
        printf("Two different roots x1=%d , x2=%d\n",Pos,Neg);
    }
    else if(judge<0){
        printf("No real root\n");
    }
    else{
        printf("Two same roots x=%d\n",Pos);
    }
}