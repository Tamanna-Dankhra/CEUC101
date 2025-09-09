// This program is based on barcode .Where we have print book Id and every 5th book is given name as Special Edition
#include<stdio.h>
int main(){

    for(int i=1;i<=50;i++){
    if(i%5==0){
        printf("Book ID: %d special edition \n",i);

    }
    else{
        printf("Book ID: %d \n",i);
    }

    }
    return 0;
}
