#include<stdio.h>
main()
{
    char chr;
        scanf("%c",&chr);
        if(chr>='0'&&chr<='9'){
            printf("diget");
        }
        else{
            printf("alphabet");
        }
}
