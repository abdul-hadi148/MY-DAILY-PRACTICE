
#include <stdio.h>

int main() {
    int matric,fsc,entry;float agg;
    printf("ENTER YOUR PERCENTAGE OF MATRIC ");
    scanf("%d",&matric);
    printf("ENTER YOUR PERCENTAGE OF FSc ");
    scanf("%d",&fsc);
    printf("ENTER YOUR PERCENTAGE IN ENTRY TEST ");
    scanf("%d",&entry);
    agg=0.20*matric+0.50*fsc+0.30*entry;
    printf("YOUR AGGREGATE IS %.2f\n",agg);
    if(agg<100)
    if(agg>=85)
    {
        if(agg<100)
            printf("ELIGIBLE FOR ENGINEERING");
    }
    if(agg>=75)
    {
        if(agg<85)
            printf("ELIGIBLE FOR GENERAL ADDMISSION");
    }
    if(agg>=60)
    {
        if(agg<75)
                printf("ELIGIBLE FOR WAITING LIST");
    }
    else
        printf("NOT ELIGIBLE FOR ADDMISSION");
    
    return 0;
}