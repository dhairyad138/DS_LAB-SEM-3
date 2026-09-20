#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    printf("Enter c : ");
    scanf("%d",&c);

    if (a>c && a>b)
    {
        printf("a is large");
    }
    else if (b>a && b>c)
    {
        printf("b is large");
    }
    else{
        printf("c is large");
    }
    
    
}