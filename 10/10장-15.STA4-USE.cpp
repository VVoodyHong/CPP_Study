// 10장-15.STA4-USE.CPP  10.4.2 template argument
#include "10장-14.STACK4.cpp" //header file 사용시에 cpp를 include한다
#include <iostream>
using namespace std;
void main (){
    Stack <int> intStack;
    Stack <double, 4> miniStack;
	intStack.Push(10);
	miniStack.Push(1.234);
	intStack.Pop();
	miniStack.Pop();
	system("pause");
}