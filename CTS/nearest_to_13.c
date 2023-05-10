#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2, k1, k2;
    printf("Enter the number1: ");
    scanf("%d",&num1);
    printf("Enter the number2: ");
    scanf("%d",&num2);

    k1 = abs(num1-13);
    k2 = abs(num2-13);

    if((num1>13) && (num2>13)){
        printf("0");
    }
    else if(k1<k2){
        printf("%d", num1);
    }
    else{
        printf("%d", num2);
    }

    return 0;
}