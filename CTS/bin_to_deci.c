#include<stdio.h>
#include<math.h>
void binarytodecimal(int number){
 
 int dec =0, rem = 0, i=0;
 while(number !=0){
    rem = number %10;
    number /=10;
    dec = dec + rem * pow(2, i);
    ++i;
 }

 printf("%d", dec);

}
void main(){
    int num;
    printf("Enter the binary num: ");
    scanf("%d", &num);
    binarytodecimal(num);
}