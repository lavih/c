/* Week 2 ex 1 */

#include <stdio.h>

int main(void)
{
    int num1,num2,num3;
	printf("Please enter 3 numbers separated by spaces:\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	int sum = num1 + num2 + num3;

	printf("The sum of the numbers is: %d\n", sum);
	//printf("The average of the numbers is: %f\n", sum/3.0);
    printf("The average of the numbers is: %d\n", sum/3);
	return 0;
}
