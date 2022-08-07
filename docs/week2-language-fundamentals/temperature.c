// shiur 3 , task 6
#include <stdio.h>

// vars
int fahr_temp;
int cel_temp;

int main(void)
{
    printf("Enter the fahr temperature\n");
    scanf("%d", &fahr_temp);
    cel_temp = (fahr_temp - 32) * 100 / (212-32);
    printf("Cel Temp is: %d\n",cel_temp);
    return 0;
}
