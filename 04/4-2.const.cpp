//4-2. const.cpp   4.2.2 ��� pointer ����
#include<iostream>
using namespace std;

/*
void main(){

    int i1 = 5;
    int i2 = 10;
    int i3 = 15;
    int i4 = 20;
	int *pi = &i1;
    const int* pc_a = &i2; //pointer-to-constant
    const int* pc_b = &i2;
    int* const cp_a = &i3; //constant pointer
    int* const cp_b = &i3;
    const int* const cpc_a = &i4; //constant pointer-to-const
    const int* const cpc_b = &i4;
    
    cout << "�ʱ� ��" << endl;
    cout << "*pi : " << *pi << " \t" << "*pc_a : " << *pc_a << "\t";
    cout << "*cp_a : " << *cp_a << "\t" << "*cpc_a : " <<  *cpc_a << endl<< endl;

//	int *pi;//�� ���Ͽ� pointer-to-constant, constan pointer, constant pointer-to-const�� ���� ġȯ�� ���������� ����
    //pi = pc_a;
//    pc_a = pi;
    //pi = pc_a;//const int*  ������ ���� int*�� assign�� �� ����
//    pi = cp_a;
    //pi = cpc_a;//const int*  ������ ���� int*�� assign�� �� ����

	//pointer-to-constant�� ���Ͽ� ġȯ�� ���������� ����
    cout << "pointer-to-constant�� ������ ġȯ" << endl;
	pc_a = pi;
	//(*pc_a)++;
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cp_a;  
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cpc_a;
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = pc_b;
    cout << "*pc_a : " << *pc_a << endl << endl;
    //*pc_a = *pi;  //���� ������ �� �ִ� lvalue���� �Ѵ�, ������ �� ���ٴ� ��
    //*pc_a = *cp_a; 
    //*pc_a = *cpc_a;
    //*pc_a = *pc_b;

	//constan pointer�� ���Ͽ� ġȯ�� ���������� ����
    //cp_a = pi; //���� ������ �� �ִ� lvalue���� �Ѵ�, ������ �� ���ٴ� ��
    //cp_a = pc_a;
    //cp_a = cpc_a;
    //cp_a = cp_b;
    cout << "constant pointer�� ������ ġȯ" << endl;
    *cp_a = *pi; 
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *pc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cpc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cp_b;
    cout << "*cp_a : " << *cp_a << endl << endl;
	
	//constant pointer-to-const�� ���Ͽ� ġȯ�� ���������� ����
    //cpc_a = pi;    
    //cpc_a = pc_a;
    //cpc_a = cp_a;
    //cpc_a =cpc_b;
    //*cpc_a = *pi;
    //*cpc_a = *pc_a;
    //*cpc_a = *cp_a;
    //*cpc_a = *cpc_b;
    system("pause");
}
*/

int main()
{
    int num1 = 10, num2 = 20, num3 = 30;
    int* pnum1;
    int* const pnum2 = &num1;       //constant pointer
    const int* pnum3 = &num1;       //pointer-to-constant
    const int* const pnum4 = &num1; //constant pointer-to-constant

    //----------------------------------------------------------------------------------------
    pnum1 = &num1;
    cout << "*pnum1:\t\t" << *pnum1 << endl;
    (*pnum1)++;                                 // �����Ϳ� ����� �ּҿ� �ִ� ���� ����(1 ����)
    cout << "(*pnum1)++:\t" << *pnum1 << endl;
    pnum1 = &num2;                              // �����Ϳ� ����� �ּҸ� ����
    cout << "(*pnum1)++:\t" << *pnum1 << endl;
//  *pnum1++;                                   // �����͸� �ϳ� ���� (�迭�� ���)
//  cout << "*pnum1++:\t" << *pnum1 << endl;    // --> �迭�� �ƴϹǷ� ������ ���� ����
    cout << "========================================================" << endl;

    //----------------------------------------------------------------------------------------
    num1 = 10, num2 = 20, num3 = 30;

    cout << "*pnum2:\t\t" << *pnum2 << endl;
    (*pnum2)++;                                 // �����Ϳ� ����� �ּҿ� �ִ� ���� ����(1 ����)
    cout << "*pnum2:\t\t" << *pnum2 << endl;
//    pnum2 = &num2;                            // �����Ϳ� ����� �ּҴ� ����� �� ����
    cout << "========================================================" << endl;

    //----------------------------------------------------------------------------------------
    num1 = 10, num2 = 20, num3 = 30;

    cout << "*pnum3:\t\t" << *pnum3 << endl;
//    (*pnum3)++;                               // �����Ϳ� ����� �ּҿ� �ִ� ���� ����� �� ����

    pnum3 = &num3;                              // �����Ϳ� ����� �ּҴ� ���� ����
    cout << "*pnum3:\t\t" << *pnum3 << endl;
    cout << "========================================================" << endl;

    //----------------------------------------------------------------------------------------
    num1 = 10, num2 = 20, num3 = 30;

    cout << "*pnum4:\t\t" << *pnum4 << endl;
//    (*pnum4)++;                               // �����Ϳ� ����� �ּҿ� �ִ� ���� ����� �� ����
//    pnum4 = &num3;                            // �����Ϳ� ����� �ּҴ� ����� �� ����
    cout << "*pnum4:\t\t" << *pnum4 << endl;
    cout << "========================================================" << endl;

    system("pause");
}