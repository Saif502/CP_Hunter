#include<stdio.h>
int main()
{
    int markes;
    char grade;
    scanf("%d",&markes);
    if(markes>=80){
        grade='a+';
        printf("your grade is %c",grade);
    }
    else if(markes>=70){
        grade='a';
        printf("your grade is %c",grade);
    }
    else if(markes>=60){
        grade='a-';
         printf("your grade is %c",grade);
    }
    else if(markes>=50){
        grade='b';
         printf("your grade is %c",grade);
    }
    else if(markes>=40){
        grade='c';
         printf("your grade is %c",grade);
    }
    else if(markes<35){
        grade='f';
         printf("your grade is %c",grade);
    }
    return 0;

}

