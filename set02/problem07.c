#include<string.h>
#include<stdio.h>
void
input (char *name)
{
  printf ("Enter Camel's name:");
  scanf ("%s", name);
}

int
has_nice_name (char *name)
{
  int n, i, count1, count2, flag;
  n = strlen (name);
  for (i = 0; i < n; i++)
    {
      if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o'
	  || name[i] == 'u' || name[i] == 'A' || name[i] == 'E'
	  || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
	{
	  count1++;
	}
      else
	{
	  count2++;
	}

    }
  if (count1 >= 2 && count2 >= 2)
    {
      flag = 1;
    }
  else
    {
      flag = 0;
    }
  return flag;
}

void
output (int flag)
{
  if (flag == 1)
    printf ("Camel has a nice name.");
  else if (flag == 0)
    printf ("Camel does not have a nice name");
}

int
main ()
{
  int flag;
  char name[100];
  input (name);
  flag = has_nice_name (&name);

  output (flag);
}