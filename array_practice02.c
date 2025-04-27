#include<stdio.h>

//#define MAX_SIZE 1000

int main(){

    int numbers[100];
    int index,Number;

    printf("Enter size of array: ");
    scanf("%d",&Number);

    printf("Enter %d element of array :",Number);
    for(index=0;index<Number;index++){
        scanf("%d",&numbers[index]);
    }
    printf("Elements in array are :");
    for(index=0;index<Number;index++){
        printf("%d,",numbers[index]);
    }

    return 0;
}
