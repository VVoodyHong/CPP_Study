// 2¿Â-2 array.cpp
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 5
int main (void){
    int salary[] = {200, 100, 33, 44, 22};
    int *current;
    int *endArray;
    int sum = 0;
    for (current = salary, endArray = salary + ARRAY_SIZE;
        current < endArray; current++)
        sum = sum + *current;
    printf("sum = %d\n", sum);
	system("pause");
    return 0;
}