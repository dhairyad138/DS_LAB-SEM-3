#include <stdio.h>
void main(){
    char ch;
    printf("Enter string : ");
    scanf("%c",&ch);

    if(ch=='E'|| ch=='e'|| ch=='a' ||ch=='A'||ch=='I'|| ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("%c character is vowel",ch);
    }
    else{
        printf("%c character is not vowel",ch);
    }
}