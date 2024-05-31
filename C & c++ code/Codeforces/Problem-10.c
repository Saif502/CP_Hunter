#include<bits/stdc++.h>
#include<string.h>
int main()
{
      int n,i,j,c=0;
      char s[100];
      printf("Enter a number :");
      scanf("%s",&s);
      for(i=0,j=strlen(s)-1;i<=j;i++,j--)
      {
          if(s[i]!=s[j])
          {
          	c=1;
            break;
          }
      }
      if(c) printf("Given number is not palindrome\n");
      else  printf("Given number is  palindrome\n");
     



}