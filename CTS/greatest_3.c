#include<stdio.h>

int main(){
 int num1,num2,num3, great;
 scanf("%d", &num1);
 scanf("%d", &num2);
 scanf("%d", &num3);

 if(num1>num2 && num1>num3){
    great = num1;
 }
 else if(num2> num1 && num2> num3){
    great = num2;
 }
 else{
    great = num3;
 }

 printf("The greatest of the 3 is: %d", great);
 return 0;

}