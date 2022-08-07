/* Week 2 ex 3 */

#include <stdio.h>

int main()
{
	char ch;
	char lowercase_char;

	printf("Please enter a character between a-z or A-Z:\n");
	scanf("%c",&ch);

	printf("The char is: %c , and the char ASCII value is: %d\n",ch,ch);
	printf("The next in line to our char is: %c\n",ch+1);

	printf("Please enter a lowercase character between a-z\n");
	scanf(" %c",&lowercase_char);
	printf("Your Uppercase character is: %c\n",lowercase_char-32);

    return 0;
}
