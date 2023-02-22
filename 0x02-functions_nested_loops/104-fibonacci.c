#include<stdio.h>

/**
 * main - Start point
 *
 * @j, @num1, @num2, @next_term: fibonacci sequence terms
 *
 * Return: always 0
 */

int main(void)
{
	int j;
	/*initialise first an second term */
	long unsigned num1 = 1;
	long unsigned num2 = 2;
	long unsigned next_term;

	/*initialise the next term */
	next_term = num1 + num2;
	/*print first two numbers of the fibonacci series */
	printf("Fibonacci sequence: %ld, %ld, " , num1, num2);

	for (j = 3; j < 98; j++)
	{
		printf("%ld, " , next_term);
		num1 = num2;
		num2 = next_term;
		next_term = num1 + num2;
	}
	return (0);
}
