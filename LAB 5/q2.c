#include <stdio.h>
void main(){
    int i,j;
    int a[3][2];
    int b[2][3];
    int m[3][3];

     printf("---Array A----");
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter array element [%d][%d] for array a : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
        
    }

    printf("---Array B ----");
    printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter array element [%d][%d] for array b : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("\n");
    printf("---After Multiplication--- ");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
            }
            printf("Multiplication of array element [%d][%d] : %d\n",i+1,j+1,m[i][j]);
        }
        
    }
    
}