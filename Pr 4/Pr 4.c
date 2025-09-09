#include<stdio.h>
#include<limits.h>
#include<float.h>
void main(){

    printf("size of int: %d\n",sizeof(int));
    printf("size of float: %d\n",sizeof(float));
    printf("size of double: %d\n",sizeof(double));
    printf("size of char %d\n",sizeof(char));

    printf("Range of int: %d to %d\n",INT_MIN,INT_MAX);
    printf("Range of float: %d to %d\n",FLT_MIN,FLT_MAX);
    printf("Range of double: %d to %d\n",DBL_MIN,DBL_MAX);
    printf("Range of char: %d to %d\n",CHAR_MIN,CHAR_MAX);

}
