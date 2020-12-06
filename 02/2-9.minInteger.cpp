//2-9. minInteger.cpp
#include <stdio.h>
#include <stdlib.h>
int *min(int *x, int *y);

int main(void){
    int num1=10, num2=15, num3=6, num4=3;

    printf("1.실습결과\n");
    printf("-----------\n");
    printf("%d 과 %d 중 작은 값은?\n", num2, num1);

    //printf("0x%08x 0x%08x\n", &num1, &num2);
    //int* tt = min(&num1, &num2);
    //printf("0x%08x:%d\n", tt, *tt);

    printf("%d\n", *min(&num1, &num2));
    printf("%d 과 %d 중 작은 값은?\n", *min(&num1, &num2), num3);
    printf("%d\n", *min(min(&num1, &num2), &num3));
	    // code 작성 부분: min(min(min..))) 또는 min(min(..), min(..)) code 작성
	system("pause");
}

int *min(int *x, int *y){
    int *pTemp;    
    if (*x < *y)	
        pTemp = x;
    else
        pTemp = y;
    return pTemp;
}
