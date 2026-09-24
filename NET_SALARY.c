
#include <stdio.h>
#include <math.h>
int main() 
{
    int basic,a,tax;
    float gross,net,allowance,taxs;
    printf("ENTER YOUR BASIC SALARY\t\t\tRS ");
    scanf("%d",&basic);
    printf("ENTER YOUR ALLOWANCE PERCENTAGE     ");
    scanf("%d",&a);
    
    allowance=basic*a/100.0;
    printf("YOUR SALARY ALLOWANCE IS        RS %.2f\n",allowance);
    gross=basic+allowance;
    printf("YOUR GROSS SALARY IS           RS %.2f\n",gross);
    if(gross>=100000)
    {
        tax=15;
    printf("TAX ON YOUR GROSS SALARY IS        %d\%\%\n",tax);
        }
    if(gross>=70000)
        if(gross<100000)
    { 
         tax=10;
         }
    if(gross>=40000)
        if(gross<70000)
    { 
        tax=5;
         }
   
       if(gross<40000)
       {
           tax=0;
        } 
    taxs=gross*tax/100;
     printf("TAX ON YOUR GROSS SALARY IS    RS %.2f\n",taxs);
    net=taxs+gross;
    
     printf("YOUR NET SALARY IS             RS %.2f",net);
    
    return 0;
}