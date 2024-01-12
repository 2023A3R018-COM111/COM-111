#include <stdio.h>


long long int factorial(int x){
	if (x == 1)
		return 1;

	return x * factorial(x-1);
}

int main(){

	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num <= 0)
	{
		printf("\nNumber can't be less than or equals to zero!\n");
		return 1;
	}

	printf("\nFactorial of %d is %lld\n", num, factorial(num));

	return 0;
}
