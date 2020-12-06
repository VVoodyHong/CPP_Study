// 9-3.VIRTDEST.CPP   9.6 virtual �Ҹ���
#include <iostream>
using namespace std;
class BaseClass {
public:
    BaseClass() {
        cout << "Base class ������ ȣ��" << endl;
    }
    ~BaseClass() {
        cout << "Base class �Ҹ��� ȣ��" << endl;
    }
};
class BaseClassV {
public:
    BaseClassV() {
        cout << "BaseV class ������ ȣ��" << endl;
    }
    virtual ~BaseClassV() {
        cout << "BaseV class �Ҹ��� ȣ��" << endl;
    }
};
class Derived : public BaseClass {
public:
    Derived() {
        cout << "Derived class ������ ȣ��" << endl;
    }
    ~Derived() {
        cout << "Derived class �Ҹ��� ȣ��" << endl;
    }
};
class DerivedV : public BaseClassV {
public:
    DerivedV() {
        cout << "DerivedV class ������ ȣ��" << endl;
    }
    ~DerivedV() {
        cout << "DerivedV class �Ҹ��� ȣ��" << endl;
    }
};

void main() {
    BaseClass* pbase;

    cout << "----BaseClass* = new BaseClass�� ���" << endl;
    pbase = new BaseClass;
    delete pbase;
    cout << endl;

    cout << "----BaseClass* = new Derived�� ���" << endl;
    pbase = new Derived;
    delete pbase; //virual�� ���� �� destructor�� ȣ��Ǵ����� Ȯ���ϴ� �ǽ�               
    cout << endl;

    cout << "----Derived* = new Derived�� ���" << endl;
    Derived* d = new Derived;
    delete d;

    cout << endl << "====Virtual Destructor====" << endl << endl;

    BaseClassV* pbasev;

    cout << "----BaseClassV* = new BaseClassV�� ���" << endl;
    pbasev = new BaseClassV;
    delete pbasev;
    cout << endl;

    cout << "----BaseClassV* = new DerivedV�� ���" << endl;
    pbasev = new DerivedV;
    delete pbasev; //virual�� ���� �� destructor�� ȣ��Ǵ����� Ȯ���ϴ� �ǽ�               
    cout << endl;

    cout << "----DerivedV* = new DerivedV�� ���" << endl;
    DerivedV* dv = new DerivedV;
    delete dv;

    cout << endl;

    system("pause");
}