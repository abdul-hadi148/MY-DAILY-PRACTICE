
#include <stdio.h>

int main() {
    int num,a,b;float fahrenheit,celcius;
    printf("FROM THESE WHAT CONVERSION DO YOU WANT\nPUT 1 IF YOU WANT CELCIUS TO FAHRENHEIT\nPUT 2 IF YOU WANT FAHRENHEIT TO CELCIUS\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("ENTER THE TEMPERATURE IN CELCIUS   ");
        scanf("%d",&num);
        fahrenheit=1.8*num+32;
        printf("THE TEMPERATURE %dC IN FAHRENHEIT IS %.2fF",num,fahrenheit);   
    }
    if(a==2)
    {
         printf("ENTER THE TEMPERATURE IN FAHRENHEIT   ");
        scanf("%d",&num);
        celcius=5.0/9*(num-32);
        printf("THE TEMPERATURE %dF IN CELCIUS IS %.2fC",num,celcius); 
    }
        
    return 0;
}