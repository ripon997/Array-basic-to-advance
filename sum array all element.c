#include<stdio.h>

int main(){

    int numbers[100];
    int index,N,sum=0;
    printf("Enter size of the array :");
    scanf("%d",&N);
    for(index=0;index<N;index++){
        scanf("%d",&numbers[index]);
    }
    printf("Enter %d elements in the array : ",N);
    for(index=0;index<N;index++){
        printf("%d ",numbers[index]);
    }
    printf("\n");
    for(index=0;index<N;index++){
        sum+=numbers[index];
    }
    printf("Sum of all elements of array = %d",sum);
    return 0;
}
