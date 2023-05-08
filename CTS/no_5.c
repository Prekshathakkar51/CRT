// either the num should be 5, or it's add should be 5 or it's differnce should be 5

#include<stdio.h>
int f(int no1, int no2){
    return (no1 ==5) || (no2 ==5) || (no1 +no2 ==5) || abs(no1 - no2 ==5);
}

void main(){
    int no1,no2;
    scanf("%d%d", &no1, &no2);
    if(f(no1, no2)){
        printf("5");
    }
    else{
        printf("no");
    }
}    