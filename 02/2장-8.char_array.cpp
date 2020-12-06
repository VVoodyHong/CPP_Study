// 2장-8 char_array.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char *num[5];
    char **p;
    char **q;
    char *t;
    //t = num;//char**을 char *에 치환할 수 없다
    //num = t;
	num[0] = "One";
    num[1] = "Two";
    num[2] = "Three";
    num[3] = "Four";
    num[4] = "Five";
	p = num;//이중 pointer를 사용하는 의미 파악 필요
	printf("*p = %s\n", *p);
    printf("Number\n");
    p = num + 4;
    for(q = num; q <= p; q++)
        printf("*q = %s\n", *q);
/*
    char *ptr;
    char w[10];
    ptr = w;
    scanf("%s", ptr);
*/
	system("pause");

    return 0;
}
//
//void test1()
//{
//    char* num[5];   // 포인터 배열 (char 포인터(문자열)를 요소로 가지는 인자 5개짜리 배열)
//    char** p;
//    char** q;
//
//    //char* t;
//    //t = num;//char**을 char *에 치환할 수 없다
//    //num = t;
//
//    num[0] = "One";
//    num[1] = "Two";
//    num[2] = "Three";
//    num[3] = "Four";
//    num[4] = "Five";
//
//    p = num;//이중 pointer를 사용하는 의미 파악 필요
//
//    printf("*p = %s\n", *p);
//    printf("Number\n");
//    p = num + 4;
//    for (q = num; q <= p; q++)
//        printf("*q = %s\n", *q);
//}
//
//void test2() // 배열 포인터 (배열을 가리키는 포인터) ==> 함수에서 2차원 배열을 파라미터로 받을 떄 사용됨.
//{
//    char org[5][6] = { "One", "Two", "Three", "Four", "Five" };
//
//    char (*num)[6];
//    char(*p)[6];
//    char(*q)[6];
//
//    num = org;
//
//    ////char* t;
//    ////t = num;//char**을 char *에 치환할 수 없다
//    ////num = t;
//
//    //num[0] = "One";
//    //num[1] = "Two";
//    //num[2] = "Three";
//    //num[3] = "Four";
//    //num[4] = "Five";
//
//    p = num;//이중 pointer를 사용하는 의미 파악 필요
//
//    printf("*p = %s\n", *p);
//    printf("Number\n");
//    p = num + 4;
//    for (q = num; q <= p; q++)
//        printf("*q = %s\n", *q);
//}
//
//
//int main(void)
//{
//    test1();
//
//    printf("\n\n");
//
//    test2();
//
//	system("pause");
//
//    return 0;
//}
