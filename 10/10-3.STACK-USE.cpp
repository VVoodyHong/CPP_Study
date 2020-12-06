// 10-3.STA1-USE.CPP   10.2 macro로 genericity를 표현
#include <iostream>
#include "10-1.STACK1.h" //macro 사용
using namespace std;

void main (){
    Stack intStack;
    intStack.Push (500);
    intStack.Push (1992);
    intStack.Push (33);
    intStack.Push (1024);
	cout<<"Number of stack = "<<intStack.Number()<<endl;

    while (! intStack.Empty ())
        cout << intStack.Pop () << endl;

	if (intStack.Empty()) cout<<"Stack is Empty"<<endl;

    Stack floatStack;
    floatStack.Push(5.00);
    floatStack.Push(19.92);
    floatStack.Push(3.3);
    floatStack.Push(10.24);
    cout << "Number of intstack = " << intStack.Number() << endl;
    cout << "Number of floatstack = " << floatStack.Number() << endl;
    while (!floatStack.Empty())
        cout << floatStack.Pop() << endl;
    if (floatStack.Empty()) cout << "Stack is Empty" << endl;
	system("pause");
} 