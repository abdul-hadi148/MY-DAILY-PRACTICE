
#include <stdio.h>

int main() {
    int a,b,c,max;
    printf("enter your number in first number ");
    scanf("%d",&a);
     printf("enter your number in second number ");
    scanf("%d",&b);
    printf("enter your number in third number ");
    scanf("%d",&c);
    if(a>b)
    { if (a>c)
        max=a;
      else
        max=c;
    }
    if (b>c)
        max=b;
    else 
        max=c;
    printf("%d is the max number",max);
    
    return 0;
}