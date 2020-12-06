// 10-7.STA3-USE.CPP   10.4.3 template�� �̿��� Container class ǥ��
#include "10-6.STACK3.CPP" ////Visual Studio�� template ���ÿ� .cpp�� include�ϰ� ��� ���-���
//#include "10-6.STACK3.h" //Visual Studio�� template ���ÿ� header file��  include�ÿ� ���� �߻��ϰ� ��
//Visual Studio�� template ���ÿ� header file�� ������� �ʾƾ� link ������ �ذ�
#include <iostream>
#include <string>
using namespace std;

void main(){
    Stack <int> intStack;

    intStack.Push(50);
    intStack.Push(19);
    intStack.Push(3);
    intStack.Push(10);
    intStack.Push('aa');

    cout<<"-----int type stack"<<endl;
    while(! intStack.Empty()){
        cout<< intStack.Pop() << endl;
    }

    Stack <double> doubleStack;

    doubleStack.Push(500.8);
    doubleStack.Push(1992.8);
    doubleStack.Push(33.8);
    doubleStack.Push(1024.8);

    cout<<"-----double type stack"<<endl;
    while(! doubleStack.Empty()){
        cout<< doubleStack.Pop() << endl;
    }

    Stack <string> stringStack;

    stringStack.Push("500");
    stringStack.Push("1992");
    stringStack.Push("33");
    stringStack.Push("1024");

    cout<<"-----string type stack"<<endl;
    while(! stringStack.Empty()){
        cout << stringStack.Pop() << endl;
    }
	system("pause");
}