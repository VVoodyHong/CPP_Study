//4-4. reference_variable.cpp    4.3 pointer 변수와 reference 변수
#include <iostream>
using namespace std;
#define COLS 5
void main(){      
    int a[COLS] = {10, 11, 12, 13, 14};
    int *pa[COLS];
    int (*ap)[COLS] = &a;   // 배열 포인터

    cout<<"<<ap 출력>>"<<endl;
    for(int i=0; i<COLS; i++){
        cout<<&a[i]<<"\t"<<&(*ap)[i]<<"\t" <<(*ap)+i<<"\t"	
             <<a[i]<<"\t" <<(*ap)[i]<<"\t"<<endl;
    }
    cout<<endl;

    int (&ar)[COLS] = a; //배열 reference
    cout<<"<<ar 출력>>"<<endl;
    for(int i=0; i<COLS; i++)
        cout<<"ar[i] = "<<ar[i]<<"\t"<<"*(ar+i) = "<<*(ar+i)<<endl;
    cout<<endl;
    cout<<"<<ar[1] 대입 결과 출력>>"<<endl;
    //ar[1] = *(ar + 1);     
    cout<<"*(ar+1) = "<<*(ar+1)<<"\t" <<"*(ar+2) = "<<*(ar+2)<<"\t" 
		<<"ar[1] = "<<ar[1]<<"\t" <<"ar[2] = "<<ar[2]<<endl;

	system("pause");
}