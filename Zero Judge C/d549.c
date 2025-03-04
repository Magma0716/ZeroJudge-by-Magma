#include <stdio.h>
#include <math.h>

int main(){
    double PA=0,PB=0,PC=0,PD=0;
    while(scanf("%lf %lf %lf",&PA,&PB,&PC) != EOF){
        PD = sqrt(pow(PA,2) + pow(PC,2) - pow(PB,2));
        printf("%.2lf\n",PD);
    }
    return 0;
}