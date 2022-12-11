#include <stdio.h>

void input_two_strings(char *a, char *b);
void input_two_strings(char *a, char *b)
{
   printf("Enter 1st name:");
    scanf("%s",a);
    printf("Enter 2nd name:");
    scanf("%s",b); 
}

int stringcompare(char *a, char *b);
int stringcompare(char *a, char *b)
{
    int i,k;
    for(i=0;a[i]!=0||b[i]!=0;i++)
    {
    if(a[i]<b[i])
    {
    k=-1;
    break;
    }
    else if(a[i]>b[i])
    {
    k=1;
    break;
    }
    else 
    k=0;
    }    
    return k;
}

void output(char *a, char *b, int result);
void output(char *a, char *b, int result)
{
    if (result<0)
     printf("%s is greater than %s\n",b,a);
     else if(result>0)
     printf("%s is greater than %s\n",a,b);
     else
     printf("%s is equal to %s\n",a,b);   
}

int main() 
{ char c[20],d[20],j;
    input_two_strings(c,d);
   j=stringcompare(c,d);
   output(c,d,j);
  return 0; 
}