#include<stdio.h>

int countDigits(int num){
    int count = 0;
    while(num>0){
        int rem = num%10;
        count++;
        num = num/10;

    }
    return count;
}



int main(){
    int number;
    scanf("%d", &number);
    printf("%d\n", countDigits(number));
    return 0;
}