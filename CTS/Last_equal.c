#include<stdio.h>
#include<stdlib.h>

int lastDigitEqualOrNot(int no1, int no2){
    return abs(no1%10) == abs(no2%10);
}

int main(){
    int no1, no2;
    printf("Enter two integers: ");
    scanf("%d %d", &no1, &no2);
    if(lastDigitEqualOrNot(no1, no2)){
        printf("Yes, the last digits are equal.\n");
    }
    else{
        printf("No, the last digits are not equal.\n");
    }
    return 0;
}
