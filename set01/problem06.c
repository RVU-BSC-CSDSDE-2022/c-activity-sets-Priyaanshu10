#include <stdio.h>
int main(void)
{
  int age;
  printf("Enter your age\n");
  scanf("%d",&age);
  if(age>=18)
  printf("You are elegible to vote.");
  else
  printf("MINOR ALERT");
  return 0;
}