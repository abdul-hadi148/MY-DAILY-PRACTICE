
#include <stdio.h>
int main()
{
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
    
    if (max==a)
        a=0;
        if(max==b)
        b=0;
            if(max==c)
        c=0;
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
        printf("the second maximum value is %d",max);
    return 0;
}