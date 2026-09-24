
#include <stdio.h>

int main() {
    int n,a,d,price,cost;float total=0,final,tax;
    printf("enter your units consumed in this month ");
    scanf("%d",&n);
    
    if(n<=100)
    {
    price=10;
    cost=n*price;
        }
    if(n>100)
    if(n<=200)
    {  a=n%100;
            cost=100*10+a*15;
    }
    if(n>200)
     if(n<=300)
     {
         a=n%200;
            cost=100*10+100*15+a*20; 
     }
    if(n>300)
    {
            a=n%300;
            cost=100*10+100*15+100*20+a*30;
    }

    printf("ELECTRICITY COST=RS %d\n ",cost);
    if (cost>5000)
    {
        tax=0.05;
    total=tax*cost;
    printf("TAX ON YOUR BILL IS =RS %.2f\n",total);
    }
    else
     total=0;
    final=total+cost;
    printf("BILL WITH TAX INCLUDED =RS %.2f",final);
    
    return 0;
}