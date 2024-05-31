#include <stdio.h>

int main()
{
    float a, b, c, d, last;
    double avg, x;
    scanf("%f %f %f %f",&a,&b,&c,&d);

        avg=(a * 2 + b * 3 + c * 4 + d) / 10;
        printf("Media: %.1lf\n",avg);

        if(avg>=7.0){
            printf("Aluno aprovado.\n");

        }
        else if(avg<5.0){
            printf("Aluno reprovado.\n");

        }
        else{
            printf("Aluno em exame.\n");
            scanf("%f",&last);
            printf("Nota do exame: %.1f\n",last);
            x=(last + avg)/2;
            if(x>=5.0){
                printf("Aluno aprovado.\n");
            }
            else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n",x);

        }

    return 0;
}

