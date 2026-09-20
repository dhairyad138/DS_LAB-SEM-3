#include <stdio.h>
void main(){
    int n;
    printf("Enter n for array index : ");
    scanf("%d",&n);
    int arry[n];
    int *ptr,i;
    ptr = arry; //point first element

    for ( i = 0; i < n; i++)
    {
        printf("array element [%d] ",(i+1));
        scanf("%d",(ptr+i)); // show user element , 
    }
    
    printf("========answer is========");
    printf(" \n ");
    for ( i = 0; i < n; i++)
    {
        printf("%d" , *(ptr+i)); // show user output ,(like a arr[i]) 
        printf(" \n ");

    }
}