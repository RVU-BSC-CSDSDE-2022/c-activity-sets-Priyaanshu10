#include <stdio.h>

void input_two_strings(char *s1, char *s2);
int stringcompare(char *s1, char *s2);
void output(char *s1, char *s2, int result);

void input_two_strings(char *s1, char *s2)
{
    printf("Enter first word-");
    scanf("%s",s1);
    printf("Enter second word-");
    scanf("%s",s2);
}

int stringcompare(char *s1, char *s2)
{
    int i,k=0;
    for(i=0;s1[i]!=0||s2[i]!=0;i++)
    {
        if(s1[i]<s2[i])
        {
        k=-1;
        break;
        }
        else if(s1[i]>s2[i])
        {
        k=1;
        break;
        }
        else
        k=0;
    }
    return k;
}

void output(char*s1, char *s2, int result)
{
    if(result==-1)
    printf("%s is greater than %s",s2,s1);
    else if(result==1)
    printf("%s is greater than %s",s1,s2);
    else
    printf("%s is equal to %s",s1,s2);
}

int main()
{
    char s1[50],s2[50];
    int result;
    input_two_strings(&s1,&s2);
    result=stringcompare(s1,s2);
    output(s1,s2,result);
    return 0;
}