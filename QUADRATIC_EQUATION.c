
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,determinant;float x3,x2,x1;
    printf("GENERAL TERM OF QUADRATIC EQUATION IS ax^2+bx+c=0\n");
        printf("ENTER VALUE OF a ");
    scanf("%d",&a);
      printf("ENTER VALLUE OF b ");
    scanf("%d",&b);
         printf("ENTER VALUE OF c "); 
    scanf("%d",&c);
   determinant=b*b-4*a*c;
    printf("THE DETERMINANT IS EQUAL TO %d\n",determinant);
    if(determinant>=0)
    {
    if (determinant==0)
    {
        printf("SO HAVE A ONE REAL ROOT\n");
            x3=-b/(float)(2*a);
        printf("THE REAL ROOT IS %.2f\n",x3);
    }
    if (determinant>0)
    {
        printf("SO HAVE TWO REAL ROOTS\n");
    x1=(-b+(float)sqrt(determinant))/2*a;
    x2=(-b-(float)sqrt(determinant))/2*a;
    printf("THE POSITIVE ROOT IS %.2f\n",x1);
    printf("THE NEGATIVE ROOT IS %.2f\n",x2);
    }}
    else 
        printf("ROOTS DOES NOT LIES");
    return 0;
}