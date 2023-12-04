#include <iostream>
#include <cstdio>


bool is_prime(int number){	
	bool prime = true;
	for(int i{2}; i<=number/2; i++)
	{
		if(number % i ==0)
		{
			prime = false;
			break;
		}
	};
	return prime;

};

int main()
{
	int number_of_primes = 0;
	int counter = 0;
	int sum = 0;

	printf("Print a number of primes: ");
	scanf("%d", &number_of_primes);
	
	for (int i{2}; counter!=number_of_primes; i++){
		if(is_prime(i))
		{
			printf("prime %d ", i);
			sum+= i;
			counter++;
		};
	};

	printf("\n");
	printf("Sum of %d first prime numbers is %d\n", number_of_primes, sum);
	return 0;
}
