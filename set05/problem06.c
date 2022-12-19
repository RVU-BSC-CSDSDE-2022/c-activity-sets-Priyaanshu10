#include <stdio.h>

void input_string(char *a)
{
    printf("Enter the string-");
    gets(a);
}

int count_words(char *a)
{
    int i,count=0;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
        count++;
    }
    return count;
}

void output(char *a, int count)
{
    printf("The number of words in %s is %d",a,count+1);
}

int main()
{
    char a[199];
    int count;
    input_string(a);
    count=count_words(a);
    output(a,count);
    return 0;
}