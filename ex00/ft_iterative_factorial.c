#include<unistd.h>
#include<stdio.h>

int ft_iterative_factorial(int num)
{
	int fact = 1;
	if(num == 0)
	{
		return (0);
	}
	else 
		while(num >= 1)
		{
			fact = fact*num;
			num--;
		}
		return fact;
}

