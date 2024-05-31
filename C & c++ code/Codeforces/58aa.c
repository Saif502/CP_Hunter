#include <stdio.h>
#include<string.h>
int main ()
{
  int i, j = 0, k, pass = 0;
  char ch[100], b[] = "hello";
  gets(ch);
  k = strlen (ch);
  for (i = 0; i < k; i++)
    {
      if (ch[i] == b[j])
	{
	  j++;
	  pass++;
	}
    }
  if (pass == 5)
    {
      printf ("YES");
    }
  else
    {
      printf ("NO");
    }
}
