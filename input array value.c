#include<stdio.h>

int main(){

    int index,total;
    printf("Enter array total element number : ");
    scanf("%d",&total);
    int numbers[total];
    for(index=0;index<total;index++){
        scanf("%d",&numbers[index]);
    }
    for(index=0;index<total;index++){
        printf("%d number index value %d\n",index,numbers[index]);
    }


    return 0;

}
