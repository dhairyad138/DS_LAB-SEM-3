#include <stdio.h>
void main(){
    int n , sum =0,i;
    int *ptr;

    printf("Enter n : ");
    scanf("%d",&n);
    
    int arr[n];
    ptr = arr;

    
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
        
        sum += (*ptr+i);
    }
    printf("%d",sum);
}