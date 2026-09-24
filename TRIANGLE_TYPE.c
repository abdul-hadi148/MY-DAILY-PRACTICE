
#include <stdio.h>

int main() {
    int a,b,c;
        printf("ENTER FIRST SIDE OF THE TRIANGLE\n");
    scanf("%d",&a);
      printf("ENTER  SIDE OF THE TRIANGLE\n");
    scanf("%d",&b);
         printf("ENTER FIRST SIDE OF THE TRIANGLE\n");
    scanf("%d",&c);
    if(a+b>c)
    {
        if(a+c>b)
            if(b+c>a)
            
                printf("IT IS A VALID TRIANGLE AND ALSO A\n");
    if(a==b)
        if(b==c)
            printf("IT IS AN EQUILATERAL TRIANGLE\n");
    if(a!=b)
        if(b!=c)
            printf("IT IS A SCALENE TRIANGLE\n");
    if(a!=b)
       if (a!=c)
           if(b==c)
           printf("IT IS A ISOSCELES TRIANGLE\n");
            }
    else 
                printf(" IT IS NOT A VALID TRIANGLE");
    return 0;
}