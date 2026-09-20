#include <stdio.h>
void main(){
    int b;
    int e;
    int result =1;

    printf("Enter Based : ");
    scanf("%d",&b);

    printf("Enter expond : ");
    scanf("%d",&e);

    for ( int i = 1; i <= e; i++)
    {
        result = result*b;
    }
    printf("result is %d : ",result);
    
}