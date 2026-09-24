
#include <stdio.h>

int main() {
    int add,sub,div,mul,rem;
    int a,b;
    char ch;
    printf("ENTER FIRST NUMBER ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER ");
    scanf("%d",&b);
    printf("ENTER THE OPERAND YOU WANT FROM +-/*%\t ");
    scanf(" %c", &ch);
    if(ch=='+')
    {
        add=a+b;
    printf("THE SUM OF TWO NUMBERS IS = %d",add);
    }
    if(ch=='-')
    {
        sub=a-b;
    printf("THE DIFFERENCE OF TWO NUMBERS IS = %d",sub);
    }
    if(ch=='*')
    {
        mul=a*b;
    printf("THE MULTIPLICATION OF TWO NUMBERS IS = %d",mul);
    }
    if(ch=='/')
    {  
        div=a/b;
    printf("THE DIVISION OF TWO NUMBERS IS = %d",div);
    }
         if(ch=='%')
         { rem=a%b;
    printf("THE MODULUS OF TWO NUMBERS IS = %d",rem);
         }
         else
             printf("PLEASE PUT THE CORRECT OPERAND");
    return 0;
}