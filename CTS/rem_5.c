// If 2 int have same remainder when divided by 5, return the smaller int. If 2 int are same , return 0

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the number1: ");
    scanf("%d", &num1);
    printf("Enter the number2: ");
    scanf("%d", &num2);

    int rem1 = num1 % 5;
    int rem2 = num2 % 5;

    if (num1 == num2)
    {
        printf("0");
    }
    else if (rem1 == rem2)
    {
        if (num1 < num2)
        {
            printf("%d", num1);
        }
        else
        {
            printf("%d", num2);
        }
    }

    return 0;
}