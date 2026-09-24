
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter your number in first number ");
    scanf("%d",&a);
     printf("enter your number in second number ");
    scanf("%d",&b);
    printf("enter your number in third number");
    scanf("%d",&c);
    if(a>b)
     if(a>c)
        printf("%d is the maximum number",a);
     if(b>a)
      if(b>c)
        printf("%d is the maximum number",b);
    if(c>a)
        if(c>b)
            printf("%d is the maximum number",c);
        
    
    return 0;
}