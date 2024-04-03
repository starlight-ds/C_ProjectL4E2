/*
 * JazminnaSmirni_Lab_4_ex2.c
 *
 *  Created on: Feb 21, 2024
 *      Author: jsmirni
 */

#include <stdio.h>

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	int i = 1;
	int n;
	int sum = 0;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("Enter the value of %d \n",sum);

	if (sum == (n*(n+1))/2)
	printf("The value of sum is equivalent to (n*(n+1))/2");

	else
	printf("The value of sum is not equivalent to (n*(n+1))/2");

	return 0;
}
