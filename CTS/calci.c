#include<stdio.h>

void addition(int a, int b){
    printf("a+b is: %d\n", (a+b));
}

void multiplication(int a, int b){
    printf("a*b is: %d\n", (a*b));
}

void division(int a, int b){
    printf("a/b is: %d\n", (a/b));
}

int main(){
    unsigned int choice;
    unsigned int a = 10, b=20;

    void
    (*operation_arr[])(int,int) = {addition,multiplication, division};

    printf("\n ENter the choice to perform operation: \n");
    scanf("%d",&choice);
    if(choice<2)
    

    (*operation_arr[choice])(a,b);
return 0;
}