/* Week 2 ex 4 */
//  https://stackoverflow.com/questions/61679463/multiplying-two-positive-numbers-returns-negative-in-c
#include <stdio.h>

int main()
{
	long num;

	printf("Please enter a number between 0-1,000,000:\n");
	scanf("%ld",&num);
    printf("your number raised to the second power is: %ld\n",num*num);
    return 0;
}
