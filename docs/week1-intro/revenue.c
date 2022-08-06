// shiur 2 , task 2
#include <stdio.h>

// vars
int transcation_value=0;
int sum_value=0;

int main(void)
{
    while (sum_value<3000){
        printf("Enter the value of transcation\n");
        scanf("%d", &transcation_value);
        sum_value = sum_value + transcation_value;
        printf("transcation_value: %d\n",sum_value);
    }
    printf("You've reached daily revenue of 3000\n");
    return 0;
}
