#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int Subtract(int a, int b)
{
	return a - b;
}

int Multiply(int a, int b)
{
	return a * b;
}

int Divide(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("It cannot be diviede by zero.");

		return -1;
	}

	return a / b;
}