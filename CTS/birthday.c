// Bday on 5th of July
// checkBirthDay return 1- if birthday, else 0
// checkBirthDay accepts 2 arguments, String month and int date

#include<stdio.h>
#include <string.h>

int CheckBirthDay(char month[], int date){

    if(strcmp(month, "July") == 0 && date == 5 ){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){

    int date;
    char month[20];

    printf("Enter the month: ");
    fgets(month, sizeof(month), stdin);
    month[strcspn(month, "\n")] = '\0';
    printf("Enter the date: ");
    scanf("%d", &date);

    int res = CheckBirthDay(month,date);

    if(res == 1){
        printf("It is Lisa's birthday");
    }
    else{
        printf("It is not Lisa's birthday");
    }

    return 0;

}