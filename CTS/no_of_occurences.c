#include<stdio.h>
int occurence(int num, int digit){
    int rem;
    int count = 0;
    while(num!=0){
        rem = num%10;
        if(rem==digit){
            count++;
        }

        num/=10;
    }
    return count;
}

void main(){
    int num, digit;
    scanf("%d",&num);
    scanf("%d",&digit);
    printf("%d", occurence(num,digit));
    }