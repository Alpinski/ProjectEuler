#include<iostream>
#include<math.h>
#include<limits>


int multiplesOf3Or5();
int evenFibonacciNumbers();
void largestPrimeFactor(long long n);
long long int largestPrimeFactor1(long long n);
int largestPalindromeProduct(int input1);

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int result = largestPalindromeProduct(a);
	std::cout << result << std::endl;
}

int largestPalindromeProduct(int input1)
{
	//998001
	cout << "Enter a number please: ";
	cin >> input1;

	int a = 0;
	int b = 0;
	long int num = 0;
	long int max = 0;
	if (!cin.fail())
	{
		for (int i = input1; i <= 9999999; i++)
		{
			b = 0;
			num = i;
			while (num > 0)
			{
				a = num % 10;
				b = b * 10 + a;
				num = num / 10;
			}
			if (b == i) {
				//cout<<b<<endl;   //uncomment this line if you intend to display all palindromes
				if (i > max)
					max = i;
			}
			//cout << max << endl;
		}
		return max;
	}
	else
	{
		cout << "ENTER A NUMBER!" << endl;
		return NULL;
	}
}

long long int largestPrimeFactor1(long long n)
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