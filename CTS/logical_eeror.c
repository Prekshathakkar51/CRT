#include<stdio.h>
void main(){
    int i = 5;
    // int a = ++i + ++i + ++i + i++;
    int a = ++i + ++i + ++i + ++i;
    printf("%d", a);
}

// o/p = 30
// expected = 31