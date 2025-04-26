#include<stdio.h>

int main(){

    int numbers[]={11,44,3,55,33,100,90};
    int first_largest=numbers[0];
    int second_largest=numbers[1];
    int first_ivalue=0;
    for(int index=0;index<7;index++){
        if(first_largest<numbers[index]){
            first_largest=numbers[index];
            first
        }
    }
    for(int index=1;index<7;index++){
        if(second_largest<numbers[index]){
            second_largest=numbers[index];
        }
    }
    printf("First largest number is : %d\n",first_largest);
    printf("Second largest number is : %d",second_largest);

    return 0;
}
