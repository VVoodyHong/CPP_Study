// 2��-8 char_array.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char *num[5];
    char **p;
    char **q;
    char *t;
    //t = num;//char**�� char *�� ġȯ�� �� ����
    //num = t;
	num[0] = "One";
    num[1] = "Two";
    num[2] = "Three";
    num[3] = "Four";
    num[4] = "Five";
	p = num;//���� pointer�� ����ϴ� �ǹ� �ľ� �ʿ�
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
//    char* num[5];   // ������ �迭 (char ������(���ڿ�)�� ��ҷ� ������ ���� 5��¥�� �迭)
//    char** p;
//    char** q;
//
//    //char* t;
//    //t = num;//char**�� char *�� ġȯ�� �� ����
//    //num = t;
//
//    num[0] = "One";
//    num[1] = "Two";
//    num[2] = "Three";
//    num[3] = "Four";
//    num[4] = "Five";
//
//    p = num;//���� pointer�� ����ϴ� �ǹ� �ľ� �ʿ�
//
//    printf("*p = %s\n", *p);
//    printf("Number\n");
//    p = num + 4;
//    for (q = num; q <= p; q++)
//        printf("*q = %s\n", *q);
//}
//
//void test2() // �迭 ������ (�迭�� ����Ű�� ������) ==> �Լ����� 2���� �迭�� �Ķ���ͷ� ���� �� ����.
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
//    ////t = num;//char**�� char *�� ġȯ�� �� ����
//    ////num = t;
//
//    //num[0] = "One";
//    //num[1] = "Two";
//    //num[2] = "Three";
//    //num[3] = "Four";
//    //num[4] = "Five";
//
//    p = num;//���� pointer�� ����ϴ� �ǹ� �ľ� �ʿ�
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
