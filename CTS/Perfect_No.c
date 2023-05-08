#include<stdio.h>

int isPerfectNo(int no){
    int sum = 0;
    int i;
    for(i = 1; i <= no/2; i++){
        if(no % i == 0){
            sum = sum + i;
        }
    }
    return (sum == no);
}

void main(){
    int no;
    scanf("%d", &no);
    if(isPerfectNo(no)){
        printf("%d is a perfect number\n", no);
    }
    else{
        printf("%d is not a perfect number\n", no);
    }
}    
