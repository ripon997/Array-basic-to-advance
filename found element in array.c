#include <stdio.h>

int main() {

    int number,hour;
    float salary,salary_per_hour;

    scanf("%d %d %f",&number,&hour,&salary_per_hour);
    salary = hour * salary_per_hour;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
