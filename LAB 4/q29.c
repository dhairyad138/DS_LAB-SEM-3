#include <stdio.h>
void main(){
    int n,i,j;
    int m;

    printf("Enter n for firs array : ");
    scanf("%d",&n);

    printf("Enter m for firs array : ");
    scanf("%d",&m);

    int f[n];
    printf("---First array element---");
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("First array elemenr [%d] : ",i);
        scanf("%d",&f[i]);
    }

    int s[m];

    printf("---Second array element---");
    printf("\n");
    for ( j = 0; j < m; j++)
    {
        printf("Second array elemenr [%d] : ",j);
        scanf("%d",&s[j]);
    }

    int merage[n+m];
    for ( i = 0; i < n; i++)
    {
        merage[i] = f[i];
    }
    for ( j = 0; j < m; j++)
    {
        merage[n+j] = s[j];
    }

    printf("---Merged array---");
    printf("\n");
    for ( i = 0; i < n+m; i++)
    {
        printf("Merged array element [%d] : %d\n",i,merage[i]);
    }

}