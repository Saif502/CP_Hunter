#include <stdio.h>
int main()
{
      float a,b;
       scanf("%f",&a);

            if(a >= 0 && a <= 2000.00 ){
             printf("Isento\n");
            }
            else if(a >=2000.01 && a <=3000.00 ){
                a=a-2000.00;
                b=a*0.08;
             printf("R$ %.2f\n",b);
             }
             else if(a>=3000.01 && a<=4500.00){
                a=a-3000.00;
                b=a*0.18+80;
             printf("R$ %.2f\n",b);
             }
             else{
                a=a-4500.00;
                b=a*0.28+350;
               printf("R$ %.2f\n",b);
             }


    return 0;
}
