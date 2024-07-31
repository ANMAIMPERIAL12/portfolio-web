#include<stdio.h>

void compare(int *a , int*b){
    if(*a>*b){
        printf("%d is greater than %d",*a,*b);
    }
    else if(*a<*b){
        printf("%d is lesser than %d",*a,*b);
    }
    else{
        printf("%d is equals to %d",*a,*b);
    }
}
int main(){
    int x,y;
    printf("Enter two numbers: \n");
    scanf("%d %d",&x,&y);
    compare(&x,&y);
    
    return 0;
}
  