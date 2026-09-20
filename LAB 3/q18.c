#include <stdio.h>
void main(){
    int n,i;

    printf("ENter n : ");
    scanf("%d",&n);

    int a[n];

    printf("---array element---\n");
    for (i = 0; i < n; i++)
    {
        printf("element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int sum=0;
    int ave;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        ave = sum/n;
    }
    printf("Average of array elements is : %d",ave);
}