
#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    int total;
    int percentage;
    printf("enter your number in first subject ");
    scanf("%d",&a);
     printf("enter your number in second subject ");
    scanf("%d",&b);
    printf("enter your number in third subject ");
    scanf("%d",&c);
    printf("enter your number in fourth subject ");
    scanf("%d",&d);
    printf("enter your number in fifth subjec ");
    scanf("%d",&e);
    printf("enter your number in sixth subject ");
    scanf("%d",&f);
    total=a+b+c+d+e+f;
    percentage=total*100/600;
    printf("you scored percentage of =%d\n and got ",percentage);
    if(percentage>=80)
    {
    printf("GRADE A");
    }
    else if(percentage>=70)
        printf("GRADE B");
     else if(percentage>=60)
        printf("GRADE C");
    else if(percentage>=50)
        printf("GRADE D");
    else if(percentage<50)
        printf("GRADE FAIL");
    return 0;
}