//2-2. pointerArray.cpp
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int* b;
	int* c[3]; //array of pointers

	// �ּ�1
	////*b = 10;//pointer ����b�� ���� run-time�� �ʱ�ȭ�� �� ����
	//b = a;
	//*b = 10;
	////*b = a; // int * ������ ����int���� entity�� ġȯ�� �� ����

	//printf("a: %p\n",a);
	//printf("b: %p\n",b);
	//printf("a[0]: %d\n",a[0]);
	//printf("*b: %d\n",*b);

	// �ּ� 2
	//*
	//c = a; // c�� lvalue�� �ƴϴ�. c�� pointer���� array �̸����� ����̴�
	//*c = a; // �ּ��� Ǯ�� ����ÿ��� ���� line 25~27�� �ּ� ó���Ͽ� ����
	//* //�ּ� �����ÿ��� line 23�� �ּ�ó���Ͽ� ����
	c[0] = &a[0];
	c[1] = &a[4];
	c[2] = &a[8];
	//*/
	printf("&a[0]: %p\n", &a[0]);
	printf("c[0]: %p\n", c[0]);
	printf("&a[4]: %p\n", &a[4]);
	printf("c[1]: %p\n", c[1]);
	printf("The value of *c[0] = %d,the value of *(c[0]+1) = %d", *c[0], *(c[0] + 1));
	//
	//*/
	system("pause");
}

//////////////////////////////////////////////////////
//
//void func(int (*matrix)[10])
//{
//	printf("%d\n", matrix[3][0]);	// 41
//	printf("%d\n", (*matrix)[5]);	// 16
//	//printf("%d\n", (*matrix)[49]);	// 60
//
//	return;
//}
//
//void func1(int matrix[][10])
//{
//	printf("%d\n", matrix[3][0]);	// 41
//	printf("%d\n", (*matrix)[5]);	// 16
//	//printf("%d\n", (*matrix)[49]);	// 60
//
//	return;
//}
//
//int main(void)
//{
//	int matrix[5][10] = {
//		{11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
//		{21, 22, 23, 24, 25, 26, 27, 28, 29, 30 },
//		{31, 32, 33, 34, 35, 36, 37, 38, 39, 40 },
//		{41, 42, 43, 44, 45, 46, 47, 48, 49, 50 },
//		{51, 52, 53, 54, 55, 56, 57, 58, 59, 60 }
//	};
//
//	func(matrix);
//	func1(matrix);
//
//	system("pause");
//}
//////////////////////////////////////////////////////
//#include <string.h>
//
//int main(void)
//{
//	char* arr[3];	// ������ �迭 --> �����͸� ��� 3���� ������ �迭
//	char tmp[30];
//	int len, i;
//
//	printf("arr : %p\n\n", arr);
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("[%d] : ", i);
//		scanf("%s", tmp);
//		len = strlen(tmp) + 1;
//		printf("[%d] : tmp\taddress : %p %p\n", i, &tmp[0], tmp);
//
//		arr[i] = (char*)malloc(sizeof(char) * len);
//		printf("[%d] : arr[%d]\taddress : %p %p\n\n", i, i, &arr[i], arr[i]);
//
//		strcpy(arr[i], tmp);
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("arr[%d] = %s\taddress : %p\n", i, arr[i], &arr[i]);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		free(arr[i]);
//	}
//
//	system("pause");
//}
//////////////////////////////////////////////////////
//int main(void)
//{
//	char(*arr)[4];	// �迭 ������ --> ��Ұ� 4���� �迭�� ����Ű�� ������
//
//	char tmp1[4] = { '1', '2', '3', '4' };
//	char tmp2[4] = { 'a', 'b', '\n' };
//	char tmp3[5] = { 'a', 'b', 'c', 'd', 'e' };
//
//	printf("tmp1[4] address : %p\n", tmp1);
//	printf("tmp2[4] address : %p\n", tmp2);
//	printf("tmp3[5] address : %p\n", tmp3);
//
//	printf("\n\n");
//
//	arr = &tmp1;
//	printf("arr address : %p\tstring : ", arr);
//	for (int i = 0; i < sizeof(*arr); i++)
//	{
//		printf("%c", (*arr)[i]);
//	}
//	printf("\n");
//
//	arr = &tmp2;
//	printf("arr address : %p\tstring : ", arr);
//	for (int i = 0; i < sizeof(*arr); i++)
//	{
//		printf("%c", (*arr)[i]);
//	}
//	printf("\n");
//
//	system("pause");
//}