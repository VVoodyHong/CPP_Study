//4-4. reference_variable.cpp    4.3 pointer ������ reference ����
#include <iostream>
using namespace std;
#define COLS 5
void main(){      
    int a[COLS] = {10, 11, 12, 13, 14};
    int *pa[COLS];
    int (*ap)[COLS] = &a;   // �迭 ������

    cout<<"<<ap ���>>"<<endl;
    for(int i=0; i<COLS; i++){
        cout<<&a[i]<<"\t"<<&(*ap)[i]<<"\t" <<(*ap)+i<<"\t"	
             <<a[i]<<"\t" <<(*ap)[i]<<"\t"<<endl;
    }
    cout<<endl;

    int (&ar)[COLS] = a; //�迭 reference
    cout<<"<<ar ���>>"<<endl;
    for(int i=0; i<COLS; i++)
        cout<<"ar[i] = "<<ar[i]<<"\t"<<"*(ar+i) = "<<*(ar+i)<<endl;
    cout<<endl;
    cout<<"<<ar[1] ���� ��� ���>>"<<endl;
    //ar[1] = *(ar + 1);     
    cout<<"*(ar+1) = "<<*(ar+1)<<"\t" <<"*(ar+2) = "<<*(ar+2)<<"\t" 
		<<"ar[1] = "<<ar[1]<<"\t" <<"ar[2] = "<<ar[2]<<endl;

	system("pause");
}