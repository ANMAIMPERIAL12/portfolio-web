#include<stdio.h>
int main(){
    int r;
    int h;
    int area;
    printf("Enter radius of the circle: ");
    scanf("%d",&r);
    area = (3.14*r*r);
    printf("Area of given circle is: %d",area);
    return 0;

}