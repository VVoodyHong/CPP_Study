//2-1. odd1.cpp 
#include <stdio.h>
#include <stdlib.h>
void main(){
    int odd[5] = {3, 5, 7, 9, 11};
    printf("&odd[0] = %p 0x%08x\n", &odd[0], &odd[0]);
    printf("odd = %p 0x%08x\n", odd, odd);
	printf("odd+1 = %p\n", odd+1); //배열의 두번째 원소의 주소
    printf("odd[0] = %d\n", odd[0]);
    printf("*odd = %d\n", *odd);
    printf("*odd+1 = %d\n", *odd+1);
    printf("*(odd+1) = %d\n", *(odd+1));
	system("pause");

} 