// 6-2.ALIAS.CPP
#include <iostream>
using namespace std;

void main (){
    int a = 2;
    int b = 10;
	// c�� b�� alias�̴�.
    int &c = b;
	cout<<"&b = "<<&b<<", &c = "<<&c<<endl;
    cout << endl << "b equals to " << b << endl;
	// ���� ������ b�� ���� �����ϰ� �ȴ�.
    c = a * b;
	cout <<"After c = a *b: a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
	// b�� ������� �ʾƾ� �Ѵ�(b�� lvalue�� ���� ���� �ƴϴ�, �׷��� ����Ǿ���)
    cout << endl << "now b equals to " << b << endl;
//	system("pause");
}