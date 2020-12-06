// 8-1. TYPE5.CPP   8.1 Ÿ�� ȣȯ�� ��Ģ 
#include <iostream>
using namespace std;

class TwoChars{
protected:
    char first;
    char second;
public:
    TwoChars(char f, char s):
    first(f),second(s)
    {}
    void print(){
        cout<<"\tTwoChars::first : "<<first<<", "<<"second : "<<second<<endl;
    }
};

class StateCode : public TwoChars{
public:
    StateCode(char f, char s):
    TwoChars(f, s)
    {}
    void print(){
        cout<<"\tStateCode::first : "<<first<<", "<<"second : "<<second<<endl;
    }
};

void main(){
    //StateCode*  pState1;
    //TwoChars*  pState2;
    StateCode pState1('C','A');
    TwoChars pState2('H','T');

    //pState1 = new StateCode('C','A');
    //pState2 = new TwoChars('H','T');

    cout<<"--class pointer�� ġȯ ��"<<endl;
   // pState1->print();
    //pState2->print();
    pState1.print();
    pState2.print();

    //�ּ� 1
    //*
    pState2 = pState1;      

    cout<<"--superclass pointer�� ġȯ ��"<<endl;

    //pState1->print();
    //pState2->print();
    pState1.print();
    pState2.print();
    //pState1 = pState2;       

    pState2 = *new TwoChars('X','Y');

    cout<<"--pState2�� ���� ���� �Ҵ� ��"<<endl;
    //pState1->print();
    //pState2->print();
    pState1.print();
    pState2.print();
   //*/ 
	system("pause");
}