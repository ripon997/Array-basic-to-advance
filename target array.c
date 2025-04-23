#include<stdio.h>

int main(){

    int numbers[]={50,45,3,4};
    int index;
    int target = 4;
    int value;
    for(index=0;index<4;index++){
        if(target==numbers[index]){
            value=index;

        }
    }
    if(value==-1){
        printf("Not found");
    }
    else{
        printf("Found\n");
        printf("Target index value %d",value);
    }
    return 0;
}
