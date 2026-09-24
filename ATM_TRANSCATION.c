
#include <stdio.h>
#include <math.h>
int main() 
{
    int balance,withdrawl,mul;
    printf("CAUTION ! THE REMAINING AMOUNT MUST BE GREATER THAN 1K\n");
    printf("ENTER YOUR CURRENT BALANCE = ");
    scanf("%d",&balance);
    printf("ENTER YOUR WITHDRAWL AMOUNT = ");
    scanf("%d",&withdrawl);
    mul=withdrawl%500;
    if(withdrawl<=balance-1000)
    if(mul==0)
    {
    printf("SATESFIED\n");
        printf("BALANCE REMAINING %d",balance-withdrawl);
    }
    else
        printf("TRANSCATION DENIED\n");
    else
        printf("INSUFFICIENT BALANCE\n");
    return 0;
}