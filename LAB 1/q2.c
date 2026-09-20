#include <stdio.h>
void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d Number is Even",n);
    }
    else{
        printf(" %d Number is odd",n);
    }
}