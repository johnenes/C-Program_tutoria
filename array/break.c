#include <stdio.h>
/**
 * main - main block
 * description: nested look
 * Return: Always 0
 */
int main()
{
int sum;

int i, j;
for(i = 1; i <= 3; i++)
{

	for(j = 1; j <= 3; j++)
	{
	printf("i %d\t j %d\n",i, j);
  
	if (i == 2 && j == 2) 
	  break;
  }
}


return (0);
}
