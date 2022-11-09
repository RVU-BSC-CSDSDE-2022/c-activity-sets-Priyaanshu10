#include<stdio.h>
#include<string.h>
void input_two_strings(char s1[],s2[])
{
  printf("Enter two strings");
  scanf("%s%s",s1,s2);
}
int mystrcmp(char s1[],char s2[])
{
  
  
}
int main()
{
char x[20],y[20];
int k;

printf("Enter the first string:");
scanf("%s",x);
printf("Enter the sencond string:");
scanf("%s",y);
k=strcmp(x,y);

if(k>0)
printf("%s is greater than %s",x,y);
else if (k<0)
printf("%s is greater than %s",y,x);
else
printf("%s is equal to %s",x,y);
return 0;
}