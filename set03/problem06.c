#include <stdio.h>
#include <string.h>

void input(char *a)
{
    printf("enter the string to be reversed :");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int n=strlen(str);
    
    for(int i=0,j=n-1;i<n;i++,j--)
    {
      rev_str[i]=str[j];
    }
    
}
void output(char *a, char *reverse_a)
{
    printf("The reverse of string %s is %s ", a , reverse_a);
}
int main()
{
    char s1[100],s2[100];
    input(s1);
    str_reverse(s1,s2);
    output(s1,s2);
    return 0;
}