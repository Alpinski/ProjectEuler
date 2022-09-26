#include<iostream>

int multiplesOf3Or5();
int evenFibonacciNumbers();
int main()
{
	int result;
	result = evenFibonacciNumbers();
	std::cout << result;
	return 0;
}

int evenFibonacciNumbers()
{
	int a=0;
	int b = 0;
	int c = 1;
	int sum = 0;
	
	while (a <= 4000000)
	{
		a = b + c;
		if (a % 2 == 0)
		{
			sum += a;
		}
		b = c;
		c = a;
	}
	return sum;
}

int multiplesOf3Or5()
{
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	return sum;
}