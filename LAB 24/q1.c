#include <stdio.h>
 int main()
{ 
int a[100],n,x,i,found=0;
scanf("%d",&n);
for(i=0;i<n;i++)
        scanf("%d",&a[i]);
scanf("%d",&x);
for(i=0;i<n;i++) {
        if(a[i]==x) {
            printf("Found at index %d",i);
            found=1;
            break;
        }
    }

    if(!found)
        printf("Not Found");
return 0;

}
