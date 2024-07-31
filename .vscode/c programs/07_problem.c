#include<stdio.h>

int main(){
    int n ;
    printf("Enter the number you want to be checked: ");
    scanf("%d",&n);
    if(n%97 == 0){
        printf("This number is divisible by 97!");
    }
    else{
        printf("Not Divisible by 97!");
    }
    return 0;
}
