#include <stdio.h>

int input()
{
    int side;
    printf("Enter the side of triangle ");
    scanf("%d",&side);
    return side;
}

int find(int s1 , int s2, int s3)
{
    int isscalene;
  if
  ((s1!=s2 && s1!=s3)&&(s2!=s3))
  isscalene=1;
  else
  isscalene=0;
  return isscalene;
}

void output(int s1, int s2, int s3, int isscalene)
{
    if
  (isscalene==1)
    printf("The triangle with sides %d, %d and %d is scalene\n",s1,s2,s3);
  else
  printf("The triangle with sides %d, %d and %d is not scalene\n",s1,s2,s3);
}

int main()
{
    int s1,s2,s3,isscalene;
  s1=input();
  s2=input();
  s3=input();
  isscalene=find(s1,s2,s3);
  output(s1,s2,s3,isscalene);
  return 0;
}