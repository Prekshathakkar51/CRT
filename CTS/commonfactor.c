#include<stdio.h>
int commonfactor(int x, int y){
    if(x==0){
        return y;
    }

    if(y==0){
        return x;
    }

    if(x==y){
        return x;
    }

    while(x != y){
        if(x>y){
            x = x-y;
            return x;
        }
        else{
            y = y-x;
            return y;
        }
    }

    
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",commonfactor(a,b));
    return 0;
}