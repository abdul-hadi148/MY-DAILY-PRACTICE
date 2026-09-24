
#include <stdio.h>

int main() {
    int a,price,cost;
    printf("enter your units consumed in this month ");
    scanf("%d",&a);
    
    if(a<=100)
    price=10;
    if(a>100)
    if(a<=200)
            price=15;
    if(a>200)
     if(a<=300)
            price=20; 
    if(a>300)
      price=25;

    cost=a*price;
    printf("ELECTRICITY COST =%d RS ",cost);
    
    return 0;
}