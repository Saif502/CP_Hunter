#include<stdio.h>
int main()
{
    float num;
    int choice;
    printf("1: feet to meters.\n2: meters to feet.\n\n");
    printf("enter choice: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter feet: ");
        scanf("%f",&num);
        printf("meters:%0.3f\n",num/3.28);
    }
    else if(choice==2){
        printf("enter meters: ");
        scanf("%f",&num);
        printf("feet:%0.3f\n",num*3.28);
    }
}
