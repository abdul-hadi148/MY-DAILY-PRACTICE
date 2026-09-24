#include <stdio.h>

int main() {

   int R,G,B;
    float C,Y,M,K,W;
    printf("ENTER THE VALUE OF RED FROM 0-255     ");
    scanf("%d",&R);
    printf("ENTER THE VALUE OF GREEN FROM 0-255   ");
scanf("%d",&G);
    printf("ENTER THE VALUE OF BLUE FROM 0-255    ");
    scanf("%d",&B);
    if(R==0&&G==0&&B==0)
    {
        C=0;
        M=0;
        Y=0;
        K=1;
    }
    else
    {
        W=(float)R/255;
        if((float)G/255<W)
         W=(float)G/255;  
         if((float)B/255<W)
         W=(float)B/255; 
    }
    C=(W-(float)R/255)/W;
     M=(W-(float)G/255)/W;
     Y=(W-(float)B/255)/W;
    K=1-W;
    printf("Cayan=%.2f\n",C);
     printf("Magenta=%.2f\n",M);
     printf("Yellow=%.2f\n",Y);
     printf("Black=%.2f\n",K);
    return 0;
}