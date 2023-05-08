// 90-100, Grade A
// 75-89, B
// 65-74, C
// 35-64, D

#include<stdio.h>
char checkGrade(int Score){
    if(Score>=90){
        return 'A';
    }
    else if(Score<90 && Score>74){
        return 'B';
    }
    else if(Score<=74 && Score>64){
        return 'C';
    }
    else if(Score<=64 && Score>34){
        return 'D';
    }

}

int main(){
    int Score;
    scanf("%d", &Score);
    printf("%c\n", checkGrade(Score));
    return 0;
}