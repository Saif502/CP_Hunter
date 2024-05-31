#include<stdio.h>
int
main ()
{


     int i, c = 1;

    char f[100];

    gets (f);

    for (i = 0; i < strlen (f); i++)
    {

   if (f[i] == f[i + 1])
	{

   c++;


   if (c == 7)

	    {

    printf ("YES");


}

}

      else
	{
	  c = 1;
	}

}

printf ("NO\n");



return 0;


}
