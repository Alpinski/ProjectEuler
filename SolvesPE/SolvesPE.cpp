#include<iostream>

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

int main()
{
	int result;
	result = multiplesOf3Or5();
	std::cout << result;
	return 0;
}

