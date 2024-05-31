#include<stdio.h>
int main()
{
    int d;
    printf("Enter the marks:");
    scanf("%d",&d);

    switch(d/5){
    case 20:
    case 19:
    case 18:
    case 17:
    case 16:
          printf(" A+\n");
          break;
    case 15:
          printf(" A\n");
          break;
    case 14:
          printf(" A-\n");
          break;
    case 13:
          printf(" b+\n");
          break;
    case 12:
          printf(" b\n");
          break;
    case 11:
          printf(" b\n");
          break;


    }
    return 0;
}

