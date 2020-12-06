// 9-3.VIRTDEST.CPP   9.6 virtual 소멸자
#include <iostream>
using namespace std;
class BaseClass {
public:
    BaseClass() {
        cout << "Base class 생성자 호출" << endl;
    }
    ~BaseClass() {
        cout << "Base class 소멸자 호출" << endl;
    }
};
class BaseClassV {
public:
    BaseClassV() {
        cout << "BaseV class 생성자 호출" << endl;
    }
    virtual ~BaseClassV() {
        cout << "BaseV class 소멸자 호출" << endl;
    }
};
class Derived : public BaseClass {
public:
    Derived() {
        cout << "Derived class 생성자 호출" << endl;
    }
    ~Derived() {
        cout << "Derived class 소멸자 호출" << endl;
    }
};
class DerivedV : public BaseClassV {
public:
    DerivedV() {
        cout << "DerivedV class 생성자 호출" << endl;
    }
    ~DerivedV() {
        cout << "DerivedV class 소멸자 호출" << endl;
    }
};

void main() {
    BaseClass* pbase;

    cout << "----BaseClass* = new BaseClass의 경우" << endl;
    pbase = new BaseClass;
    delete pbase;
    cout << endl;

    cout << "----BaseClass* = new Derived의 경우" << endl;
    pbase = new Derived;
    delete pbase; //virual이 없을 때 destructor가 호출되는지를 확인하는 실습               
    cout << endl;

    cout << "----Derived* = new Derived의 경우" << endl;
    Derived* d = new Derived;
    delete d;

    cout << endl << "====Virtual Destructor====" << endl << endl;

    BaseClassV* pbasev;

    cout << "----BaseClassV* = new BaseClassV의 경우" << endl;
    pbasev = new BaseClassV;
    delete pbasev;
    cout << endl;

    cout << "----BaseClassV* = new DerivedV의 경우" << endl;
    pbasev = new DerivedV;
    delete pbasev; //virual이 없을 때 destructor가 호출되는지를 확인하는 실습               
    cout << endl;

    cout << "----DerivedV* = new DerivedV의 경우" << endl;
    DerivedV* dv = new DerivedV;
    delete dv;

    cout << endl;

    system("pause");
}