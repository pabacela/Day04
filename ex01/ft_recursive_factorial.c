#include<unistd.h>
#include<stdio.h>

int ft_recursive_factorial(int num)
{
	if(num == 1)
	{
		return (1);
	}
	else
	{ 
		return (num*ft_recursive_factorial(num-1));
	}
}
int main()
{
	printf("%d",ft_recursive_factorial(1));
			
	return (0);

}

