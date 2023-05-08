#include<stdio.h>

int isPalindromeOrNot(int no){
    int sum = 0, rem = 0;
    int temp = no;
    while(no){
        rem = no % 10;
        sum = sum * 10 + rem;
        no = no / 10;
    }

    if(temp == sum){
        return 1;
    }
    else{
        return 0;
    }
}

void main(){
    int no;
    scanf("%d", &no);
    if(isPalindromeOrNot(no)){
        printf("%d is palindrome\n", no);
    }
    else{
        printf("%d is not palindrome\n", no);
    }
}    
