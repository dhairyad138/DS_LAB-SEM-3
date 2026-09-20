#include <stdio.h>
#include <string.h>

void main(){
    char sta[100];
    char *ptrS,*ptrE;
    int temp =1;

    printf("Enter String : ");
    scanf("%s",&sta);

    ptrS = sta;
    ptrE = sta + strlen(sta)-1;

    while (ptrS < ptrE)
    {
        if (*ptrS != *ptrE)
        {
            temp = 0;
            break;
        }
        ptrS++;
        ptrE--;
        
    }
    if (temp==1)
    {
        printf("=== String is palindrome ===");
    }
    else{
        printf("=== String is not palindrome ===");
    }
    
    
}