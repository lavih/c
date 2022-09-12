/* Week 2 ex 5 */

#include <stdio.h>

int main()
{
    float num;
    printf("Please enter a number:\n");
    scanf("%f",&num);
    printf("The number is: %f\n",num);
    printf("Value after edit: %08.3f\n",num);
    return 0;
}