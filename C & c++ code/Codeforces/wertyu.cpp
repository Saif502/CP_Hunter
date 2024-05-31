বিবাহিত-১
Md. Mostafizur Rahman Rumon
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("myResult.txt","w+");

    if(file==NULL)
    {
        printf("File doesn't written");
    }
    else
    {

        char name[100],roll[100],reg[100];
        fgets(name,sizeof(name),stdin);
        scanf("%s",&roll);
        scanf("%s",&reg);
        fprintf(file,"Name: %s",name);
        fprintf(file,"Roll: %s\n",roll);
        fprintf(file,"Registration: %s\n",reg);
        fprintf(file,"Name of Subjects \n");
        fprintf(file,"S.L\t\t\tSubjects\t\t\tCredits\t\t\tMarks\t\t\tGrades\t\t\tGPA \n");
        int num=5;
        float tcrd=0,sumCrd=0,cgpa=0;
        for(int i=0; i<num; i++)
        {
            char sub[100],grd[5];
            float crd,gpa;
            int mrks;
            char *p;

            fprintf(file,"%d\t\t",i+1);
            gets(sub);
            fgets(sub,sizeof(sub),stdin);
            if((p=strchr(sub,'\n'))!=NULL)*p='\0';
            fprintf(file,"%s",sub);

            scanf("%f %d %s %f",&crd,&mrks,&grd,&gpa);
            tcrd+=crd;
            sumCrd+=(crd*gpa);
            fprintf(file,"\t\t\t%.2f\t\t\t%d\t\t\t%s\t\t\t%.1f \n",crd,mrks,grd,gpa);
        }
        cgpa=sumCrd/tcrd;
        fprintf(file,"\n\n\n");
        fprintf(file,"Total Credits: %.2f\n\n",tcrd);
        fprintf(file,"CGPA: %.2f\n",cgpa);

    }
    fclose(file);
    return 0;
}
