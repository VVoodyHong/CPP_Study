//2-4. pointer_array.cpp
#include <stdio.h>
#include <stdlib.h>

void main()
{
    // ******************�迭 pointer******************
    //1���� �迭 ���� �� �ʱ�ȭ
    int a1[5] = {5, 4, 3, 2, 1};
    //2���� �迭 ���� �� �ʱ�ȭ
    int a2[3][5] = {{0, 5, 10, 15, 20},{1, 6, 11, 16, 21},{2, 7, 12, 17, 22}};  

    // 1���� �迭�� ���� pointer ����
    int *ap1 = a1;  
    //5���� ���� ������ �迭�� ����Ű�� array to pointer ����
    int (*ap2)[5];
   // int(*ap3)[4];
   // ap3 = a2;
    ap2 = a2; 
   // *ap2 = a2; // *ap2�� �迭 [5]�� ����Ű�� �迭 �̸� ����� ����, lvalue�� �ƴϴ�.
    //*ap2 = *a2; // ���� �ǿ����ڴ� l-value�̾�� �մϴ�.
	*ap2[0] = 100;//*ap2�� lvalue�� �ƴ������� *ap2[0]�� lvalue�̴�

    // int *ap3; ap3 = *a2;�� ���� �����̴�. ap3�� row 0�� �����ּҸ� ���´�.
    int *ap3 = *(a2+1); //���� row
    int *p = (*a2+1); //���� column
	//int *q[3] = a2; //q�� array�̹Ƿ� �ʱ�ȭ�ϱ� ���� {..}�� �ʿ��ϴ�.
    int (*q)[5] = a2; //q�� pointer to array�̹Ƿ� �迭 ��� �̸����� �ֱ�ȭ ����
	
	//1�� �ּ�
	/*
	printf("a2 = %p, ap3 = %p, p = %p\n", a2, ap3, p);
    //�迭 pointer�� �̿��� ����
    //�迭���� �迭 pointer�� access�ϴ� ���� ����.
    printf("\n\n �迭���� pointer�� ����� ����:\n"); 
    printf("a1[0] : %d\n",a1[0]);
    // �迭�� �ּҸ� ������ �ִ� pointer�� ����� ���� ap1�� �迭 ���¿� ���� 
    //   ����Ͽ� 0�� °�� �ش��ϴ� �迭 ������ ���� ������ �� �ִ�.
    printf("ap1[0] : %d\n",ap1[0]); 
    printf("*a1 : %d\n",*a1);//a1++�� ������ �ʴ´�
    printf("*ap1 : %d\n",*ap1++); //ap1++�� ����
	printf("*ap1++ : %d\n",*ap1);

	printf("\n Array a2[][]�� ���� ����\n");
    printf("a2[0][0] : %d\n",a2[0][0]);
    printf("ap2[0][0] : %d\n",ap2[0][0]);
    printf("**a2 : %d\n",**a2);
    printf("**ap2 : %d\n",**ap2);
    printf("ap3[1] : %d\n",ap3[1]);
    printf("*p : %d\n",*p);
    printf("*(p+1) : %d\n",*(p+1));
    printf("*q : %p\n",*q);
    printf("*q[0] : %d\n",*q[0]);
    */

	//2�� �ּ�
    //*
    printf("\n\n2�� �ּ�\n\n");
	printf("a1 = %p, ap1 = %p\n", a1, ap1);
	printf("a2 = %p, ap2 = %p, ap3 = %p\n", a2, ap2, ap3);
    printf("ap1++  ap2++  ap3++ ���� ��\n");
    printf("*ap1 = %d\n",*ap1); 
    printf("**ap2 = %d\n",**ap2);
    printf("*ap3 = %d\n",*ap3);
    ap1++;
    ap2++;//���� row?
    ap3++; // ���� column���� �̵�?
    printf("\nap1++  ap2++  ap3++ ���� ��\n");
	printf("a1 = %p, ap1 = %p\n", a1, ap1);
	printf("a2 = %p, ap2 = %p, ap3 = %p\n", a2, ap2, ap3);
    printf("*ap1 = %d\n",*ap1);
    printf("**ap2 = %d\n",**ap2);
    printf("*ap3 = %d\n",*ap3);
    //*/
	system("pause");
}