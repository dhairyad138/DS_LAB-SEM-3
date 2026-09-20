#include <stdio.h>
void main(){
    int d;
    printf("Enter total days : ");
    scanf("%d",&d);

    int YY = d/365;
    int W = (d%365)/7;
    int D = (d%365)%7;

    printf("%d:%d:%d",YY,W,D);
}