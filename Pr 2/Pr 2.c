/* This program is about finding value of area,perimeter
but value of length and breadth is already fixed */
#include<stdio.h>
#define Length =l
#define Breadth =b
void main(){
    int l,b,perimeter,area;
    l=70;
    b=90;
    // Finding perimeter and area of field
    area=l*b;
    perimeter= 2*(l+b);

    printf("perimeter = %d\n",perimeter);
    printf("area = %d\n",area);
}
