#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the length of rectangle : ");
    scanf("%d",&a);
    printf("Enter the width of rectangle : ");
    scanf("%d",&b);
    int area = (a*b);
    printf("Area of given rectangle is : %d",area);
    return 0;
    
}