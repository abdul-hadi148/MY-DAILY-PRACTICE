
#include <stdio.h>

int main() {
    int num,b,a,c;
    printf("ENTER ANY NUMBER OF YOUR CHOICE\n");
    scanf("%d",&num);
    if(num>=100)
        if(num<1000)
    {
        printf("IT IS A THREE DIGIT NUMBER \n");
        a=num%10;
        num=num/10;
        b=num%10;
        num=num/10;
        c=num;
        printf("THE UNIT PLACE DIGIT IS %d\n",a);
         printf("THE TEN PLACE DIGIT IS %d\n",b);
         printf("THE HUNDRED PLACE DIGIT IS %d\n",c);
    }
    else
    if (num>=1000)
        printf("IT IS NOT A THREE DIGIT NUMBER PLEASE INPUT ANOTHER NUMBER");
    return 0;
}