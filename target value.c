#include<stdio.h>

int main(){

    int marks[]= {25,30,40,54,80};
    int target;
    printf("Enter target value :\n");
    scanf("%d",&target);
    int found = -1;
    for(int index=0;index<5;index++){
        if (marks[index]==target){
            found=index;
            break;
        }

    }
    if(found==-1){
        printf("Not found");
    }
    else{
        printf("Found");
    }

    return 0;
}
