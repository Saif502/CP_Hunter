#include<stdio.h>
int main()
{
   float weight,hight;
   printf("Enter w in KG unit & H in meter unit :");
   scanf("%f %f",&weight,&hight);
   float BMI = weight/(hight*hight);
   printf("\n");
   printf("BMI is : %.2f\n",BMI);
   if(BMI<18.5)
   printf("Underweight");
   else if(BMI>=18.5 && BMI<=24.9)
   printf("Normal");
   else if(BMI>=25 && BMI<=29.9)
   printf("Overweight");
   else if(BMI>=30)
   printf("Obese");
   return 0;
}