// 10��-6.STA2-USE.CPP 10.3 ��Ӱ� polymorphism�� ����Ͽ� genericity ǥ��
#include <iostream>
#include "10��-4.STACK2.h"
using namespace std;

class IntObject : public GenericObject{
public:
    int data;
    IntObject (int num) : data (num) { }
};

class FloatObject : public GenericObject {
public:
    float data;
    FloatObject(float num) : data(num) { }
};
void main (){
    Stack genericStack;
    genericStack.Push (new IntObject (500));
    genericStack.Push (new IntObject (1992));
    genericStack.Push (new IntObject (33));
    genericStack.Push (new IntObject (1024));
    genericStack.Push(new FloatObject(9.999));
	cout<<"Number of stack = "<<genericStack.Number()<<endl;
    cout << ((FloatObject*)genericStack.Pop())->data << endl;
    while (! genericStack.Empty ())
        cout << ((IntObject *) genericStack.Pop()) -> data << endl;

	if (genericStack.Empty()) cout<<"Stack is Empty"<<endl;
    system("pause");
}

//// geodb �߰� ==> dynamic_cast �̿��� ���
//void main (){
//    Stack genericStack;
//    genericStack.Push (new IntObject (500));
//    genericStack.Push (new IntObject (1992));
//    genericStack.Push (new IntObject (33));
//    genericStack.Push (new IntObject (1024));
//    genericStack.Push(new FloatObject(9.999));
//	cout<<"Number of stack = "<<genericStack.Number()<<endl;
//    while (!genericStack.Empty())
//    {
//        GenericObject* pObj = genericStack.Pop();
//        IntObject* iobj = dynamic_cast<IntObject*>(pObj);
//        if (iobj)
//            cout << "int  :" << iobj->data << endl;
//        else
//        {
//            FloatObject* fobj = dynamic_cast<FloatObject*>(pObj);
//            if (fobj)
//                cout << "float:" << fobj->data << endl;
//            else
//                cout << "unknown type" << endl;
//        }
//    }
//
//	if (genericStack.Empty()) cout<<"Stack is Empty"<<endl;
//    system("pause");
//}
