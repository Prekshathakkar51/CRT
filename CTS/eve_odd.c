#include<stdio.h>

int main(){
    int num;

    printf("Enter the num: ");
    scanf("%d", &num);

    if(num %2 == 0){

        for (int i = 0; i <= num; i++)
        {
            if(i%2 == 0)
            printf("%d\t", i);
        }
        
    }
    else if(num %2 !=0){

        for (int i = 0; i <= num; i++)
        {
            if(i%2 != 0)
            printf("%d\t", i);
        }

    }

    return 0;
}