#include <stdio.h>
void main(){
    int n,i,j,*ptr;
    printf("Enter n for array length : ");
    scanf("%d",&n);

    int arr[n];
    ptr = arr;

    for ( i = 0; i < n; i++)
    {
        printf("Enter array [%d] element : ",i+1);
        scanf("%d",(ptr+i));
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (*(ptr+i)> *(ptr+j))
            {
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
            
        }
        
    }
    printf("----short Array ---- \n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ", *(ptr+i));
    }
    
}