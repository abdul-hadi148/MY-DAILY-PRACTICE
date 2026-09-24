
#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    int total;
    int percentage,per;
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
    
   per=percentage/10;
    switch (per)
        {
    case 8:
        printf("GRADE A");
            break;
    case 7:
        printf("GRADE B");
             break;
    case 6:
        printf("GRADE C");
             break;
    case 5:
        printf("GRADE D");
             break;
    case 4:
         printf("GRADE FAIL");
             break;
        }
    return 0;
}