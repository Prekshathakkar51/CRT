#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if((num%13 == 0) || (num%13 == 1)){
        printf("1");
    }
    else{
        printf("0");
    }
}