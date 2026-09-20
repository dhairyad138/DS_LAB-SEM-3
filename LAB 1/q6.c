#include <stdio.h>
void main(){
    int s;
    printf("Enter Total Second : ");
    scanf("%d",&s);

    int HH = (s)/3600;
    int MM = (s%3600)/60;
    int SS = s%52;

    printf("%d:%d:%d",HH,MM,SS);
}