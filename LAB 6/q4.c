#include <stdio.h>
void main(){
    int n,i,*ptr;
    
    printf("Enter n for array index : ");
    scanf("%d",&n);
    
    int arr[n];
    ptr = arr;

    for ( i = 0; i < n; i++)
    {
        printf("Array Element [%d] : ",i+1);
        scanf("%d",(ptr+i));
    }

    int max = arr[0];
     for ( i = 1; i < n; i++)
    {
        if (*(ptr+i)>max)
        {
            max = *(ptr+i);
        }

        
    }
    
    printf("%d",max);

    
}