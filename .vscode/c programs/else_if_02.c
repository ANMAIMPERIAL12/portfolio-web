#include<stdio.h>

int main(){
    int a = 45;
    if (a>60){
        printf("You can drive but you are a senior citizen. ");
    }
    else if(a>40){
        printf("You can drive and you are elder.");
    }
    else if(a>18){
        printf("You can drive!");
    }
    else{
        printf("You cannot drive.");
    }
    return 0;
}
