#include<stdio.h>

int main(){

    int index,total,sum=0;

    printf("Enter array total element number : ");
    scanf("%d",&total);
    int numbers[total];
    for(index=0;index<total;index++){
        scanf("%d",&numbers[index]);
    }

    int smallest=numbers[0],biggest=numbers[0];

    for(index=0;index<total;index++){
        printf("%d number index value %d\n",index,numbers[index]);
        sum+=numbers[index];

        if(smallest > numbers[index]) {
            smallest = numbers[index];

        }
        if(biggest < numbers[index]) {
            biggest = numbers[index];
        }
    }

    printf("Summation of array element : %d\n",sum);
    float average;
    average=(float)sum/total;
    printf("Average = %.2f\n",average);
    printf("Smallest Value : %d\n",smallest);
    printf("Bigest Value : %d",biggest);

    return 0;

}
