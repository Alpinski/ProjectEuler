#include<iostream>

int multiplesOf3Or5();
int evenFibonacciNumbers();
void largestPrimeFactor(long long n);
int largestPrimeFactor1(long long n);

int main()
{
	int result = largestPrimeFactor1(600851475143);
	std::cout << result << std::endl;
}

int largestPrimeFactor1(long long n)
{
	long long a = 2;
	long long b = 0;
	while (a * a <= n)
	{
		if (n % a == 0)
		{
			
			n /= a;
		}
		else
		{
			a++;
		}
	}
	return n;
}

void largestPrimeFactor(long long n)
{
	long long a = 2;
	while (a * a <= n)
	{
		if (n % a == 0)
		{
			std::cout << a << std::endl;
			n /= a;
		}
		else
		{
			a++;
		}	
	}
	if (n > 1)
	{
		std::cout << n << std::endl;
	}
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