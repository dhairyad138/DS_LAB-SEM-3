#include <stdio.h>
void main(){
    int i,j;
    int a[2][2];
    int b[2][2];
    int s[2][2];

    printf("---Array A----");
    printf("\n");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter array element [%d] for array a : ",i+1);
            scanf("%d",&a[i][j]);
        }

        printf("\n");

        
    }
    printf("\n");

    printf("---Array B ----");
    printf("\n");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter array element [%d] for array b : ",i+1);
            scanf("%d",&b[i][j]);
        }
        
        printf("\n");
    }
     printf("\n");

    printf("---After Addition--- ");
    printf("\n");
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
            printf("Sum of array element [%d] : %d\n",i+1,s[i][j]);
        }
        
    }

}