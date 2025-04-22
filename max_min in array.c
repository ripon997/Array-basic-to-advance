#include<stdio.h>

int main(){

    int marks[]= {25,30,40,54,80};
    int maximum,minimum,index;
    maximum=marks[0];
    minimum=marks[0];

    for(index=0;index<5;index++){
        if (maximum<marks[index]){
            maximum=marks[index];
        }
        if(minimum>marks[index]){
            minimum=marks[index];
        }
    }
    printf("Maximum value is : %d\n",maximum);
    printf("MInimum value is : %d",minimum);

    return 0;
}
