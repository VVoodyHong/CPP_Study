//4-2. const.cpp   4.2.2 상수 pointer 선언
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
    
    cout << "초기 값" << endl;
    cout << "*pi : " << *pi << " \t" << "*pc_a : " << *pc_a << "\t";
    cout << "*cp_a : " << *cp_a << "\t" << "*cpc_a : " <<  *cpc_a << endl<< endl;

//	int *pi;//에 대하여 pointer-to-constant, constan pointer, constant pointer-to-const에 대한 치환이 가능한지를 조사
    //pi = pc_a;
//    pc_a = pi;
    //pi = pc_a;//const int*  형식의 값을 int*에 assign할 수 없다
//    pi = cp_a;
    //pi = cpc_a;//const int*  형식의 값을 int*에 assign할 수 없다

	//pointer-to-constant에 대하여 치환이 가능한지를 조사
    cout << "pointer-to-constant에 가능한 치환" << endl;
	pc_a = pi;
	//(*pc_a)++;
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cp_a;  
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cpc_a;
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = pc_b;
    cout << "*pc_a : " << *pc_a << endl << endl;
    //*pc_a = *pi;  //식이 수정할 수 있는 lvalue여야 한다, 수정할 수 없다는 뜻
    //*pc_a = *cp_a; 
    //*pc_a = *cpc_a;
    //*pc_a = *pc_b;

	//constan pointer에 대하여 치환이 가능한지를 조사
    //cp_a = pi; //식이 수정할 수 있는 lvalue여야 한다, 수정할 수 없다는 뜻
    //cp_a = pc_a;
    //cp_a = cpc_a;
    //cp_a = cp_b;
    cout << "constant pointer에 가능한 치환" << endl;
    *cp_a = *pi; 
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *pc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cpc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cp_b;
    cout << "*cp_a : " << *cp_a << endl << endl;
	
	//constant pointer-to-const에 대하여 치환이 가능한지를 조사
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
    (*pnum1)++;                                 // 포인터에 저장된 주소에 있는 값을 변경(1 증가)
    cout << "(*pnum1)++:\t" << *pnum1 << endl;
    pnum1 = &num2;                              // 포인터에 저장된 주소를 변경
    cout << "(*pnum1)++:\t" << *pnum1 << endl;
//  *pnum1++;                                   // 포인터를 하나 증가 (배열인 경우)
//  cout << "*pnum1++:\t" << *pnum1 << endl;    // --> 배열이 아니므로 쓰레기 값이 나옴
    cout << "========================================================" << endl;

    //----------------------------------------------------------------------------------------
    num1 = 10, num2 = 20, num3 = 30;

    cout << "*pnum2:\t\t" << *pnum2 << endl;
    (*pnum2)++;                                 // 포인터에 저장된 주소에 있는 값을 변경(1 증가)
    cout << "*pnum2:\t\t" << *pnum2 << endl;
//    pnum2 = &num2;                            // 포인터에 저장된 주소는 변경될 수 없음
    cout << "========================================================" << endl;

    //----------------------------------------------------------------------------------------
    num1 = 10, num2 = 20, num3 = 30;

    cout << "*pnum3:\t\t" << *pnum3 << endl;
//    (*pnum3)++;                               // 포인터에 저장된 주소에 있는 값은 변경될 수 없음

    pnum3 = &num3;                              // 포인터에 저장된 주소는 변경 가능
    cout << "*pnum3:\t\t" << *pnum3 << endl;
    cout << "========================================================" << endl;

    //----------------------------------------------------------------------------------------
    num1 = 10, num2 = 20, num3 = 30;

    cout << "*pnum4:\t\t" << *pnum4 << endl;
//    (*pnum4)++;                               // 포인터에 저장된 주소에 있는 값은 변경될 수 없음
//    pnum4 = &num3;                            // 포인터에 저장된 주소는 변경될 수 없음
    cout << "*pnum4:\t\t" << *pnum4 << endl;
    cout << "========================================================" << endl;

    system("pause");
}